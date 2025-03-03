from setuptools import find_packages
from setuptools import setup

setup(
    name='jw_interface_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('jw_interface_msgs', 'jw_interface_msgs.*')),
)
