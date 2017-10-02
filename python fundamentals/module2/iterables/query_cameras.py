import argparse

def parse_cam_file(camera_file):
    camera_file.readline()
    camera_file.readline()
    #it cannot be deleted the last 9 lines so create all the lists and then delete the last 9 lists
    cams = []
    for line in camera_file:
        row = line.split(',')
        cams.append(row)
    del(cams[-9:])
    return cams

parser = argparse.ArgumentParser(description="Input arguments for finding cameras in a road or city")

parser.add_argument("--file", required = True, dest = "cam_file", help = "Name of the file containing all the locations of the cameras")

parser.add_argument("--city", dest = "city", help = "To look for cameras in certain city")

parser.add_argument("--road", dest = "road", help = "To loof for cameras in certain road")

args = parser.parse_args()

with open(args.cam_file) as cam_file:
    cameras = parse_cam_file(cam_file)

if args.city == None and args.road == None:
    parser.error("Please provide a valid argument to look for cameras in city or road")

if args.city:
    final = filter(lambda x: args.city == x[1], cameras)
    print final

if args.road:
    final = filter(lambda x: args.road == x[2], cameras)
    print final
#print(cameras)
