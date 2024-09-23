version = "jp"
basename = "chameleontwist"

def apply(config, args):
    config['baseimg'] = f'baserom.{version}.z64'
    config['myimg'] = f'build/chameleontwist'
    config['mapfile'] = f'build/{basename}.map'
    config['source_directories'] = ['src', 'include']
    config['objdump_flags'] = ['-M','reg-names=32']
