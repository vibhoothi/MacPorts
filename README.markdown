# Development MacPorts

These is my development repository for my local MacPorts. Feel free to use my local ports, but remember that these are unofficial.


## Documentation

To use my local MacPorts, you will have to set it up as a local portfile repository as follows:

```bash

$ sudo port selfupdate
$ sudo port upgrade outdated

$ sudo rm -R /usr/local/macports && git clone https://github.com/foxnet-git/MacPorts.git /usr/local/macports
$ sudo /bin/sh -c 'echo "file:///usr/local/macports/ports [nosync]" >> /opt/local/etc/macports/sources.conf'
$ portindex /usr/local/macports/ports


```
