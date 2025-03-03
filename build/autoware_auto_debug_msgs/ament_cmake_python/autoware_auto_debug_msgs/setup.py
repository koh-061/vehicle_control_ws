from setuptools import find_packages
from setuptools import setup

setup(
    name='autoware_auto_debug_msgs',
    version='0.1.0',
    packages=find_packages(
        include=('autoware_auto_debug_msgs', 'autoware_auto_debug_msgs.*')),
)
