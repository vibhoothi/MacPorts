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

## Using Precompiled version of the toolchain

To use the precompiled version of the arm-unknown-linux-gnueabihf it is very 
easy, you would require to do some simple steps to get it done

```
$ cd arm-unknown-linux-gnueabihf
$ cat * > arm-unknown-linux-gnueabihf.tar.gz
$ tar -xvzf arm-unknown-linux-gnueabihf.tar.gz
```
You would require to add `\bin` folder to PATHs

If you are using fish shell do by 
`set -U fish_user_paths /path/to/bin/folder $fish_user_paths`

If you are using bash shell do by 
`PATH=$PATH:/path/to/bin/folder/`
