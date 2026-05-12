## Modify 
In `.vnc/xstartup`, edit:

```bash
#!/bin/sh

[ -r /etc/sysconfig/i18n ] && . /etc/sysconfig/i18n
export LANG
export SYSFONT

unset SESSION_MANAGER
unset DBUS_SESSION_BUS_ADDRESS

. /etc/X11/xinit/xinitrc-common
exec $CK_INIT_SESSION $SSH_AGENT icewm-session || \
exec $CK_INIT_SESSION $SSH_AGENT icewm-session

[ -r $HOME/.Xresources ] && xrdb $HOME/.Xresources
xsetroot -solid grey
xterm -geometry 80x24+10+10 -ls -title "$VNCDESKTOP Desktop" &
icewm-session &

```

Then 
```bash
chmod a+x xstartup
```
## Wiki
[icewm VNC](https://wiki.dunescience.org/wiki/DUNE_Computing/Using_VNC_Connections_on_the_dunegpvms#Prerequisite:_Setting_up_your_window_manager_on_the_dunegpvms)

