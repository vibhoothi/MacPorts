# Development MacPorts

These is my development repository for my local MacPorts. Feel free to use my local ports, but remember that these are unofficial.


## Documentation

To use my local MacPorts, you will have to set it up as a local portfile repository as follows:

1. Clone the [repository](https://github.com/bmeurer/MacPorts) - `git clone git@github.com:bmeurer/MacPorts.git`
2. `cd MacPorts/ports`
3. `(echo "file:/$PWD [nosync]" && cat /opt/local/etc/macports/sources.conf) > sources.conf && sudo mv sources.conf /opt/local/etc/macports/sources.conf`
4. `portindex`

Now you can install new ports or upgrade existing ports from my local MacPorts repository. Remember to rerun `portindex` every time you pull from my repository.

See the official [MacPorts Guide](http://guide.macports.org/) for general instruction about how to setup MacPorts, especially the section about [Local Portfile Repositories](http://guide.macports.org/#development.local-repositories).


## Bug Reports

If you come across any problems, please [create a ticket](http://github.com/bmeurer/MacPorts/issues) and I will try to get it fixed as soon as possible.


## Contributing

Once you've made your commits:

1. [Fork](http://help.github.com/fork-a-repo/ "Fork a repo") MacPorts.
2. Create a topic branch - `git checkout -b my_branch`.
3. Push to your topic branch - `git push origin my_branch`.
4. Create a [Pull Request](http://help.github.com/pull-requests/ "Send pull requests") from your topic branch.
5. That's it!


