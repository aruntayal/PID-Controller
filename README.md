# CarND-Controls-PID
The project is about  implementing a PID controller in C++ to maneuver the vehicle around the  track.The simulator  provides cross track error (CTE) in order to compute the appropriate steering angle.

Tune the PID hyperparameters P,I and D in order to succcessfully maneuver the vehicle around the track.
___
##Reflection

###Approach used to tune Hyperparameters
Firstly started with low value of P and keeping I and D as zero. For low value of P it immediately went off the track. Kept on increasing the P till the car remain largely on track(though oscillating very heavily).

After gettting a suitable value of P,I next targeted to reduce the car oscillation on track which was happening due to overshooting. Kept on increasing value of D hyperparameter till the car gets largely stable on track.

Now, with I hyperparameter, tried adjusting for systematic bias. As the simulator didnot displayed any systematic bias, I kept a low value for it.





---

## Dependencies

* cmake >= 3.5
 * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools]((https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)
* [uWebSockets](https://github.com/uWebSockets/uWebSockets)
  * Run either `./install-mac.sh` or `./install-ubuntu.sh`.
  * If you install from source, checkout to commit `e94b6e1`, i.e.
    ```
    git clone https://github.com/uWebSockets/uWebSockets 
    cd uWebSockets
    git checkout e94b6e1
    ```
    Some function signatures have changed in v0.14.x. See [this PR](https://github.com/udacity/CarND-MPC-Project/pull/3) for more details.
* Simulator. You can download these from the [project intro page](https://github.com/udacity/self-driving-car-sim/releases) in the classroom.

There's an experimental patch for windows in this [PR](https://github.com/udacity/CarND-PID-Control-Project/pull/3)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./pid`. 




