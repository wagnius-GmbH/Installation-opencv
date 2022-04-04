/* First OpenCV program.
*/
#include <iostream>
#include <opencv2/opencv.hpp>

int main()
{
    printf("Hello world\n");

    // Read an image.
    cv::Mat image = cv::imread("G:/Meine Ablage/001_wagnius GmbH/100_Marketing/home page data/Wagnius DE.jpg");
    if (image.empty()) {
        std::cout << "Hey! Can't read the image!" << std::endl;
        system("PAUSE");
        return EXIT_FAILURE;
    }
    cv::resize(image, image, { 1000,int(1000/1.777778) }, 0, 0, cv::INTER_LINEAR);

    // Create image window named "My Image".  (You actually don't have to do
    // this step, but this command allows you to set properties of the window,
    // such as its location, or whether you can resize it.)
    cv::namedWindow("My Image");
    // Show the image in the window
    cv::imshow("My Image", image);
    // Wait for 5000 ms (0 means wait until a keypress)
    cv::waitKey(0);
    return EXIT_SUCCESS;
}