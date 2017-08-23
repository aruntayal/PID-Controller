## Reflection

### Approach used to tune Hyperparameters
I manually tuned the P,I and D hyper parameters.

Firstly started with low value of P and keeping I and D as zero. For low value of P it immediately went off the track. Kept on increasing the P till the car remain largely on track(though oscillating very heavily).**I started with zero and finally settled at 0.1 **

After gettting a suitable value of P,my next targeted was to reduce the car oscillation on track which was happening due to overshooting. Kept on increasing value of D hyperparameter till the car gets largely stable on track.**I started with 0 and settled at 4.**

Now, with I hyperparameter, tried adjusting for systematic bias. As the simulator didnot displayed any systematic bias, I kept a low value for it.**I started with 0 and settled at 0.004.**