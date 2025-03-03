from setuptools import setup
import os
from glob import glob

package_name = 'vehicle_control'

setup(
    name=package_name,
    version='0.1.0',
    packages=[package_name],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='your_name',
    maintainer_email='your_email@example.com',
    description='Vehicle control using keyboard inputs',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'vehicle_controller = vehicle_control.vehicle_controller:main',
        ],
    },
    data_files=[
        ('share/' + package_name, ['package.xml']),  # package.xml を明示的にインストール
        ('share/' + package_name + '/launch', glob('launch/*.launch.py')),  # **Launchファイルをインストール対象に追加**
    ],
    package_dir={'': 'src'}
)
