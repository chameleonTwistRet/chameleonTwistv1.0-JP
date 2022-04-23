version = "jp"
basename = "chameleontwist"

def apply(config, args):
    config['baseimg'] = f'baserom.{version}.z64'
    config['myimg'] = f'build/{basename}.{version}.z64'
    config['mapfile'] = f'build/{basename}.{version}.map'
    config['source_directories'] = ['src', 'include']
