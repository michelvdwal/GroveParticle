# GroveParticle

Experiments for iOT with Particle and Grove System for OSX

## Acknowledgement

Although all samples will probably work on Windows or Linux, all projects have been developed and tested in MacOS X (10.13.2).

### Prerequisites

To work with these experiments you need

* [Atom](https://atom.io/) - Code Editor
* [Particle-Dev package for Atom](https://atom.io/packages/particle-dev) - Particle Extension for Atom
* [RedBear Duo](https://redbear.cc/product/wifi-ble/redbear-duo.html) - iOT board with WIFI and BLE from RedBear or [Photon](https://store.particle.io/products/photon) - iOT board with WIFI from Particle
* [Grove Base Shield](http://wiki.seeed.cc/Grove_Base_Shield_for_Photon/) - Expansion shield board to connect the iOT board to the Grove System

These experiments use several sensors, actuators, leds or other output Grove System modules found [here](https://www.seeedstudio.com/category/Grove-c-1003.html)

Because of firmware dependencies, these projects will not execute standalone on ParticleDev when using RedBear Duo. Download or clone the project folders to a local repository and run through Atom.

### Installing

To start running these experiments you need to install the software mentioned above. Then provision your RedBear Duo or Photon. It needs to connect to your local WIFI network to connect to the particle cloud.

First connect your iOT board to your expansion shield. Then connect your expansion shield to USB power. Any of the USB ports on your computer will do.

Download an app to your phone and follow the instructions to enable provisioning:

* [RedBear Duo](https://itunes.apple.com/us/app/redbear-duo/id1147034973?mt=8) - iOS app
* [RedBear Duo](https://play.google.com/store/apps/details?id=com.redbear.redbearbleclient&hl=en) - Android app
* [Photon](https://docs.particle.io/guide/getting-started/tinker/photon/) - Apps for Photon

To provision your iOT board, you first need to put it in [Listening Mode](https://docs.particle.io/guide/getting-started/modes/photon/#listening-mode)

You might have to upgrade your firmware first - [Instructions for RedBear Duo](https://github.com/redbear/Duo/blob/master/docs/firmware_deployment_guide.md)

### First Run

To see if everything works, login to a account on [Particle.io](https://console.particle.io/devices) and see if your device is listed. If it's not you will have to claim your device in the Particle cloud first.

If everything works go to the [Particle Cloud IDE](https://build.particle.io/build/new) and click on your device in the bottom right corner of your screen. You now see your device in the menu on the left hand side of your screen. Click the arrow to downdrill more details. Click on the 'SIGNAL' button. The on board led of your iOT board will cycle multiple colors to show it has received the signal.

You're now ready to go. Move over to Atom and open a project folder. Don't forget to select your device in Atom before trying to flash your code.

## Author

* **Michel van der Wal**

## License

This project is licensed under GNU General Public License - see the [LICENSE.md](LICENSE.md) file for details
