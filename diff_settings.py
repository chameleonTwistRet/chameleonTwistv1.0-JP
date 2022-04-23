#!/usr/bin/env python3

def apply(config, args):
    config['baseimg'] = 'baserom.jp.z64'
    config['myimg'] = 'build/chameleontwist.jp.z64'
    config['mapfile'] = 'build/chameleontwist.jp.map'
    config['source_directories'] = ['./src','./include']
    config['objdump_flags'] = ['-M','reg-names=32']
