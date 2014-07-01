import rosbag
bag = rosbag.Bag('acceldata.bag')
for topic, msg, t in bag.read_messages(topics=['arduino']):
	print msg.ax
bag.close()
