#include "ros/ros.h"
#include "cha2_tutorials/cha2_msg1.h"

void messageCallback(const cha2_tutorials::cha2_msg1::ConstPtr& msg)
{
    ROS_INFO("I heard: [%d] [%d] [%d]",msg->A,msg->B,msg->C);
}
int main(int argc,char **argv)
{
    ros::init(argc,argv,"example3_b");
    ros::NodeHandle n;
    ros::Subscriber sub=n.subscribe("message",1000,messageCallback);
    ros::spin();
    return 0;
}