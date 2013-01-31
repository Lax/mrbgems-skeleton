# mrbgem-skeleton

A skeleton for starting new mrbgems

# Usage

Add the following line into *build_config.rb* (in mruby directory):

    conf.gem '/path/to/your/gem/dir'

    conf.gem 'relative_path/to/your/gem/dir'

or

    conf.gem :git => 'https://github.com/Lax/mrbgems-skeleton.git', :branch => 'master'

    conf.gem :github => 'Lax/mrbgems-skeleton', :branch => 'master'

# Author

Lantao Liu

# Contribute

Report bugs to https://github.com/Lax/mrbgems-skeleton/issues
