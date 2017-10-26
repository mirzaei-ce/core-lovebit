
Debian
====================
This directory contains files used to package lovebitd/lovebit-qt
for Debian-based Linux systems. If you compile lovebitd/lovebit-qt yourself, there are some useful files here.

## lovebit: URI support ##


lovebit-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install lovebit-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your lovebit-qt binary to `/usr/bin`
and the `../../share/pixmaps/lovebit128.png` to `/usr/share/pixmaps`

lovebit-qt.protocol (KDE)

