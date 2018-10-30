#!/bin/bash

line="0 */3 * * * /sbin/reboot"
(crontab -u root -l; echo "$line" ) | crontab -u root -
