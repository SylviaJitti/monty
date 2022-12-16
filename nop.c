root@2dced288a905:~/alx-low_level_programming/0x18-dynamic_libraries# ls
0-isupper.c  0-strcat.c  1-isdigit.c  1-strncat.c  2-strlen.c   3-islower.c  3-strcmp.c  4-isalpha.c  5-strstr.c  9-strcpy.c     README.md
0-isupper.o  0-strcat.o  1-isdigit.o  1-strncat.o  2-strlen.o   3-islower.o  3-strcmp.o  4-isalpha.o  5-strstr.o  9-strcpy.o
0-memset.c   100-atoi.c  1-memcpy.c   2-strchr.c   2-strncpy.c  3-puts.c     3-strspn.c  4-strpbrk.c  6-abs.c     libdynamic.so
0-memset.o   100-atoi.o  1-memcpy.o   2-strchr.o   2-strncpy.o  3-puts.o     3-strspn.o  4-strpbrk.o  6-abs.o     main.h
root@2dced288a905:~/alx-low_level_programming/0x18-dynamic_libraries# vi 1-create_dynamic_lib.sh
root@2dced288a905:~/alx-low_level_programming/0x18-dynamic_libraries# ls
0-isupper.c  0-strcat.o               1-isdigit.o  2-strchr.c   2-strncpy.o  3-strcmp.c   4-isalpha.o  6-abs.c        main.h
0-isupper.o  100-atoi.c               1-memcpy.c   2-strchr.o   3-islower.c  3-strcmp.o   4-strpbrk.c  6-abs.o        README.md
0-memset.c   100-atoi.o               1-memcpy.o   2-strlen.c   3-islower.o  3-strspn.c   4-strpbrk.o  9-strcpy.c
0-memset.o   1-create_dynamic_lib.sh  1-strncat.c  2-strlen.o   3-puts.c     3-strspn.o   5-strstr.c   9-strcpy.o
0-strcat.c   1-isdigit.c              1-strncat.o  2-strncpy.c  3-puts.o     4-isalpha.c  5-strstr.o   libdynamic.so
root@2dced288a905:~/alx-low_level_programming/0x18-dynamic_libraries# chmod u+x 1-create_dynamic_lib.sh
root@2dced288a905:~/alx-low_level_programming/0x18-dynamic_libraries# ls
0-isupper.c  0-strcat.o               1-isdigit.o  2-strchr.c   2-strncpy.o  3-strcmp.c   4-isalpha.o  6-abs.c        main.h
0-isupper.o  100-atoi.c               1-memcpy.c   2-strchr.o   3-islower.c  3-strcmp.o   4-strpbrk.c  6-abs.o        README.md
0-memset.c   100-atoi.o               1-memcpy.o   2-strlen.c   3-islower.o  3-strspn.c   4-strpbrk.o  9-strcpy.c
0-memset.o   1-create_dynamic_lib.sh  1-strncat.c  2-strlen.o   3-puts.c     3-strspn.o   5-strstr.c   9-strcpy.o
0-strcat.c   1-isdigit.c              1-strncat.o  2-strncpy.c  3-puts.o     4-isalpha.c  5-strstr.o   libdynamic.so
root@2dced288a905:~/alx-low_level_programming/0x18-dynamic_libraries# chmod u+x 0-strcat.c 100-atoi.c 1-strncat.c 2-strlen.c 2-strncpy.c 3-i3-puts.c 4-isalpha.c 6-abs.c 9-strcpy.c
root@2dced288a905:~/alx-low_level_programming/0x18-dynamic_libraries# ls
0-isupper.c  0-strcat.o               1-isdigit.o  2-strchr.c   2-strncpy.o  3-strcmp.c   4-isalpha.o  6-abs.c        main.h
0-isupper.o  100-atoi.c               1-memcpy.c   2-strchr.o   3-islower.c  3-strcmp.o   4-strpbrk.c  6-abs.o        README.md
0-memset.c   100-atoi.o               1-memcpy.o   2-strlen.c   3-islower.o  3-strspn.c   4-strpbrk.o  9-strcpy.c
0-memset.o   1-create_dynamic_lib.sh  1-strncat.c  2-strlen.o   3-puts.c     3-strspn.o   5-strstr.c   9-strcpy.o
0-strcat.c   1-isdigit.c              1-strncat.o  2-strncpy.c  3-puts.o     4-isalpha.c  5-strstr.o   libdynamic.so
root@2dced288a905:~/alx-low_level_programming/0x18-dynamic_libraries# git add .
root@2dced288a905:~/alx-low_level_programming/0x18-dynamic_libraries# git commit -m "task 2"
[master 7921f04] task 2
 11 files changed, 4 insertions(+)
 mode change 100644 => 100755 0x18-dynamic_libraries/0-strcat.c
 create mode 100755 0x18-dynamic_libraries/1-create_dynamic_lib.sh
 mode change 100644 => 100755 0x18-dynamic_libraries/1-strncat.c
 mode change 100644 => 100755 0x18-dynamic_libraries/100-atoi.c
 mode change 100644 => 100755 0x18-dynamic_libraries/2-strlen.c
 mode change 100644 => 100755 0x18-dynamic_libraries/2-strncpy.c
 mode change 100644 => 100755 0x18-dynamic_libraries/3-islower.c
 mode change 100644 => 100755 0x18-dynamic_libraries/3-puts.c
 mode change 100644 => 100755 0x18-dynamic_libraries/4-isalpha.c
 mode change 100644 => 100755 0x18-dynamic_libraries/6-abs.c
 mode change 100644 => 100755 0x18-dynamic_libraries/9-strcpy.c
root@2dced288a905:~/alx-low_level_programming/0x18-dynamic_libraries# git push
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 495 bytes | 165.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/SylviaJitti/alx-low_level_programming
   487de05..7921f04  master -> master
root@2dced288a905:~/alx-low_level_programming/0x18-dynamic_libraries# ls -la lib*
-rwxr-xr-x 1 root root 17320 Dec 15 22:42 libdynamic.so
root@2dced288a905:~/alx-low_level_programming/0x18-dynamic_libraries# nm -D libdynamic.so
00000000000017f8 T _abs
0000000000001201 T _atoi
                 w __cxa_finalize
                 w __gmon_start__
00000000000016a5 T _isalpha
0000000000001288 T _isdigit
0000000000001481 T _islower
0000000000001119 T _isupper
                 w _ITM_deregisterTMCloneTable
                 w _ITM_registerTMCloneTable
00000000000012ad T _memcpy
000000000000113e T _memset
                 U putchar
00000000000014a6 T _puts
000000000000117d T _strcat
000000000000138a T _strchr
00000000000014fe T _strcmp
000000000000181b T _strcpy
00000000000013d0 T _strlen
00000000000012f4 T _strncat
0000000000001402 T _strncpy
00000000000016d6 T _strpbrk
0000000000001604 T _strspn
000000000000174c T _strstr
root@2dced288a905:~/alx-low_level_programming/0x18-dynamic_libraries# git add .
root@2dced288a905:~/alx-low_level_programming/0x18-dynamic_libraries# git commit -m "Task 0"
On branch master
Your branch is up to date with 'origin/master'.

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        ../0x04-more_functions_nested_loops/.10-print_triangle.c.swp
        ../0x04-more_functions_nested_loops/10-print_triangle.c

nothing added to commit but untracked files present (use "git add" to track)
root@2dced288a905:~/alx-low_level_programming/0x18-dynamic_libraries# git push
To https://github.com/SylviaJitti/alx-low_level_programming
 ! [rejected]        master -> master (fetch first)
error: failed to push some refs to 'https://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@github.com/SylviaJitti/alx-low_level_programming'
hint: Updates were rejected because the remote contains work that you do
hint: not have locally. This is usually caused by another repository pushing
hint: to the same ref. You may want to first integrate the remote changes
hint: (e.g., 'git pull ...') before pushing again.
hint: See the 'Note about fast-forwards' in 'git push --help' for details.
root@2dced288a905:~/alx-low_level_programming/0x18-dynamic_libraries# git pull
remote: Enumerating objects: 6, done.
remote: Counting objects: 100% (6/6), done.
remote: Compressing objects: 100% (4/4), done.
remote: Total 4 (delta 2), reused 0 (delta 0), pack-reused 0
Unpacking objects: 100% (4/4), 851 bytes | 851.00 KiB/s, done.
From https://github.com/SylviaJitti/alx-low_level_programming
   7921f04..a98853d  master     -> origin/master
Updating 7921f04..a98853d
Fast-forward
 0x18-dynamic_libraries/101-make_me_win.sh | 3 +++
 1 file changed, 3 insertions(+)
 create mode 100644 0x18-dynamic_libraries/101-make_me_win.sh
root@2dced288a905:~/alx-low_level_programming/0x18-dynamic_libraries# git push
Everything up-to-date
root@2dced288a905:~/alx-low_level_programming/0x18-dynamic_libraries# cd ..
root@2dced288a905:~/alx-low_level_programming# cd ..
root@2dced288a905:~# sudo apt-get update
Hit:1 http://archive.ubuntu.com/ubuntu focal InRelease
Get:2 http://archive.ubuntu.com/ubuntu focal-updates InRelease [114 kB]
Get:3 http://security.ubuntu.com/ubuntu focal-security InRelease [114 kB]
Hit:4 http://ppa.launchpad.net/brightbox/ruby-ng/ubuntu focal InRelease
Get:5 http://archive.ubuntu.com/ubuntu focal-backports InRelease [108 kB]
Get:6 http://archive.ubuntu.com/ubuntu focal-updates/restricted amd64 Packages [1,894 kB]
Get:7 http://archive.ubuntu.com/ubuntu focal-updates/universe amd64 Packages [1,275 kB]
Get:8 http://archive.ubuntu.com/ubuntu focal-updates/multiverse amd64 Packages [30.4 kB]
Get:9 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 Packages [2,828 kB]
Get:10 http://archive.ubuntu.com/ubuntu focal-backports/universe amd64 Packages [28.6 kB]
Get:11 http://archive.ubuntu.com/ubuntu focal-backports/main amd64 Packages [55.2 kB]
Get:12 http://security.ubuntu.com/ubuntu focal-security/universe amd64 Packages [972 kB]
Get:13 http://security.ubuntu.com/ubuntu focal-security/multiverse amd64 Packages [27.7 kB]
Get:14 http://security.ubuntu.com/ubuntu focal-security/restricted amd64 Packages [1,779 kB]
Get:15 http://security.ubuntu.com/ubuntu focal-security/main amd64 Packages [2,358 kB]
Fetched 11.6 MB in 16s (724 kB/s)
Reading package lists... Done
root@2dced288a905:~# sudo apt-get upgrade
Reading package lists... Done
Building dependency tree
Reading state information... Done
Calculating upgrade... Done
The following packages will be upgraded:
  alsa-ucm-conf apt base-files bash bind9-dnsutils bind9-host bind9-libs binutils binutils-common binutils-x86-64-linux-gnu
  ca-certificates curl dbus dbus-user-session dirmngr distro-info-data dnsutils dpkg dpkg-dev e2fsprogs ghostscript git git-man gnupg
  gnupg-l10n gnupg-utils gpg gpg-agent gpg-wks-client gpg-wks-server gpgconf gpgsm gpgv gzip libapt-pkg6.0 libasn1-8-heimdal libbinutils
  libc-bin libc-dev-bin libc6 libc6-dbg libc6-dev libc6-dev-i386 libc6-dev-x32 libc6-i386 libc6-x32 libcom-err2 libctf-nobfd0 libctf0
  libcups2 libcurl3-gnutls libcurl4 libdbus-1-3 libdpkg-perl libexpat1 libexpat1-dev libext2fs2 libfreetype-dev libfreetype6
  libfreetype6-dev libfribidi0 libgdk-pixbuf2.0-0 libgdk-pixbuf2.0-bin libgdk-pixbuf2.0-common libgmp-dev libgmp10 libgmpxx4ldbl
  libgnutls30 libgs9 libgs9-common libgssapi3-heimdal libgstreamer1.0-0 libharfbuzz0b libhcrypto4-heimdal libheimbase1-heimdal
  libheimntlm0-heimdal libhx509-5-heimdal libjbig0 libjpeg-turbo8 libkeyutils1 libkmod2 libkrb5-26-heimdal libksba8 libldap-2.4-2
  libldap-common liblzma5 libmysqlclient-dev libmysqlclient21 libnss-systemd libpam-systemd libpcre2-8-0 libpcre3 libperl5.30
  libpixman-1-0 libpython3.8 libpython3.8-dev libpython3.8-minimal libpython3.8-stdlib libroken18-heimdal libsensors-config libsensors5
  libsepol1 libsqlite3-0 libsqlite3-dev libss2 libssl-dev libssl1.1 libsystemd0 libtiff5 libudev1 libwayland-client0 libwayland-cursor0
  libwayland-egl1 libwind0-heimdal libxml2 linux-libc-dev locales login logsave mysql-client-8.0 mysql-client-core-8.0 mysql-server
  mysql-server-8.0 mysql-server-core-8.0 networkd-dispatcher openssh-client openssh-server openssh-sftp-server openssl passwd perl
  perl-base perl-modules-5.30 python-apt-common python3-apt python3.8 python3.8-dev python3.8-minimal systemd systemd-sysv
  systemd-timesyncd tzdata unattended-upgrades unzip vim vim-common vim-runtime xxd xz-utils zlib1g zlib1g-dev
151 upgraded, 0 newly installed, 0 to remove and 0 not upgraded.
Need to get 140 MB of archives.
After this operation, 10.8 MB of additional disk space will be used.
Do you want to continue? [Y/n] y
Get:1 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libc6-dbg amd64 2.31-0ubuntu9.9 [20.0 MB]
Get:2 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libc6-dev-x32 amd64 2.31-0ubuntu9.9 [1,977 kB]
Get:3 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libc6-dev-i386 amd64 2.31-0ubuntu9.9 [1,902 kB]
Get:4 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libc6-i386 amd64 2.31-0ubuntu9.9 [2,730 kB]
Get:5 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libc6-dev amd64 2.31-0ubuntu9.9 [2,519 kB]
Get:6 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libc-dev-bin amd64 2.31-0ubuntu9.9 [71.8 kB]
Get:7 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 linux-libc-dev amd64 5.4.0-135.152 [1,121 kB]
Get:8 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libc6-x32 amd64 2.31-0ubuntu9.9 [2,780 kB]
Get:9 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libc6 amd64 2.31-0ubuntu9.9 [2,722 kB]
Get:10 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 base-files amd64 11ubuntu5.6 [60.4 kB]
Get:11 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 bash amd64 5.0-6ubuntu1.2 [639 kB]
Get:12 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 dpkg amd64 1.19.7ubuntu3.2 [1,128 kB]
Get:13 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 gzip amd64 1.10-0ubuntu4.1 [95.2 kB]
Get:14 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 login amd64 1:4.8.1-1ubuntu5.20.04.4 [221 kB]
Get:15 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libperl5.30 amd64 5.30.0-9ubuntu0.3 [3,951 kB]
Get:16 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 perl amd64 5.30.0-9ubuntu0.3 [224 kB]
Get:17 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 perl-base amd64 5.30.0-9ubuntu0.3 [1,514 kB]
Get:18 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 perl-modules-5.30 all 5.30.0-9ubuntu0.3 [2,739 kB]
Get:19 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 zlib1g-dev amd64 1:1.2.11.dfsg-2ubuntu1.5 [155 kB]
Get:20 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 zlib1g amd64 1:1.2.11.dfsg-2ubuntu1.5 [54.2 kB]
Get:21 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 locales all 2.31-0ubuntu9.9 [3,869 kB]
Get:22 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libc-bin amd64 2.31-0ubuntu9.9 [633 kB]
Get:23 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 liblzma5 amd64 5.2.4-1ubuntu1.1 [91.8 kB]
Get:24 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libnss-systemd amd64 245.4-4ubuntu3.19 [95.8 kB]
Get:25 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 systemd-timesyncd amd64 245.4-4ubuntu3.19 [28.1 kB]
Get:26 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 systemd-sysv amd64 245.4-4ubuntu3.19 [10.3 kB]
Get:27 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 dbus amd64 1.12.16-2ubuntu2.3 [151 kB]
Get:28 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libdbus-1-3 amd64 1.12.16-2ubuntu2.3 [179 kB]
Get:29 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libexpat1-dev amd64 2.2.9-1ubuntu0.6 [116 kB]
Get:30 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libexpat1 amd64 2.2.9-1ubuntu0.6 [74.6 kB]
Get:31 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libpam-systemd amd64 245.4-4ubuntu3.19 [186 kB]
Get:32 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libgmp-dev amd64 2:6.2.0+dfsg-4ubuntu0.1 [320 kB]
Get:33 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libgmpxx4ldbl amd64 2:6.2.0+dfsg-4ubuntu0.1 [9,144 B]
Get:34 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libgmp10 amd64 2:6.2.0+dfsg-4ubuntu0.1 [241 kB]
Get:35 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libgnutls30 amd64 3.6.13-2ubuntu1.7 [828 kB]
Get:36 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libssl-dev amd64 1.1.1f-1ubuntu2.16 [1,584 kB]
Get:37 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libssl1.1 amd64 1.1.1f-1ubuntu2.16 [1,321 kB]
Get:38 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libkmod2 amd64 27-1ubuntu2.1 [45.3 kB]
Get:39 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libpcre2-8-0 amd64 10.34-7ubuntu0.1 [198 kB]
Get:40 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 systemd amd64 245.4-4ubuntu3.19 [3,812 kB]
Get:41 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libsystemd0 amd64 245.4-4ubuntu3.19 [268 kB]
Get:42 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libudev1 amd64 245.4-4ubuntu3.19 [75.5 kB]
Get:43 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libapt-pkg6.0 amd64 2.0.9 [839 kB]
Get:44 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libksba8 amd64 1.3.5-2ubuntu0.20.04.1 [95.1 kB]
Get:45 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 gpg-wks-client amd64 2.2.19-3ubuntu2.2 [97.4 kB]
Get:46 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 dirmngr amd64 2.2.19-3ubuntu2.2 [330 kB]
Get:47 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 gpg-wks-server amd64 2.2.19-3ubuntu2.2 [90.2 kB]
Get:48 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 gnupg-utils amd64 2.2.19-3ubuntu2.2 [481 kB]
Get:49 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 gpg-agent amd64 2.2.19-3ubuntu2.2 [232 kB]
Get:50 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 gpg amd64 2.2.19-3ubuntu2.2 [482 kB]
Get:51 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 gpgconf amd64 2.2.19-3ubuntu2.2 [124 kB]
Get:52 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 gnupg-l10n all 2.2.19-3ubuntu2.2 [51.7 kB]
Get:53 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 gnupg all 2.2.19-3ubuntu2.2 [259 kB]
Get:54 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 gpgsm amd64 2.2.19-3ubuntu2.2 [217 kB]
Get:55 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libsqlite3-dev amd64 3.31.1-4ubuntu0.5 [697 kB]
Get:56 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libsqlite3-0 amd64 3.31.1-4ubuntu0.5 [549 kB]
Get:57 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libcom-err2 amd64 1.45.5-2ubuntu1.1 [9,548 B]
Get:58 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libroken18-heimdal amd64 7.7.0+dfsg-1ubuntu1.2 [42.3 kB]
Get:59 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libasn1-8-heimdal amd64 7.7.0+dfsg-1ubuntu1.2 [181 kB]
Get:60 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libheimbase1-heimdal amd64 7.7.0+dfsg-1ubuntu1.2 [30.0 kB]
Get:61 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libhcrypto4-heimdal amd64 7.7.0+dfsg-1ubuntu1.2 [87.9 kB]
Get:62 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libwind0-heimdal amd64 7.7.0+dfsg-1ubuntu1.2 [48.0 kB]
Get:63 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libhx509-5-heimdal amd64 7.7.0+dfsg-1ubuntu1.2 [107 kB]
Get:64 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libkrb5-26-heimdal amd64 7.7.0+dfsg-1ubuntu1.2 [207 kB]
Get:65 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libheimntlm0-heimdal amd64 7.7.0+dfsg-1ubuntu1.2 [15.1 kB]
Get:66 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libgssapi3-heimdal amd64 7.7.0+dfsg-1ubuntu1.2 [96.2 kB]
Get:67 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libldap-common all 2.4.49+dfsg-2ubuntu1.9 [16.6 kB]
Get:68 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libldap-2.4-2 amd64 2.4.49+dfsg-2ubuntu1.9 [155 kB]
Get:69 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 gpgv amd64 2.2.19-3ubuntu2.2 [200 kB]
Get:70 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 apt amd64 2.0.9 [1,294 kB]
Get:71 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 logsave amd64 1.45.5-2ubuntu1.1 [10.2 kB]
Get:72 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libext2fs2 amd64 1.45.5-2ubuntu1.1 [183 kB]
Get:73 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 e2fsprogs amd64 1.45.5-2ubuntu1.1 [527 kB]
Get:74 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 python3.8-dev amd64 3.8.10-0ubuntu1~20.04.6 [514 kB]
Get:75 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libpython3.8-dev amd64 3.8.10-0ubuntu1~20.04.6 [3,949 kB]
Get:76 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libpython3.8 amd64 3.8.10-0ubuntu1~20.04.6 [1,625 kB]
Get:77 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 python3.8 amd64 3.8.10-0ubuntu1~20.04.6 [387 kB]
Get:78 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libpython3.8-stdlib amd64 3.8.10-0ubuntu1~20.04.6 [1,675 kB]
Get:79 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 python3.8-minimal amd64 3.8.10-0ubuntu1~20.04.6 [1,901 kB]
Get:80 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libpython3.8-minimal amd64 3.8.10-0ubuntu1~20.04.6 [717 kB]
Get:81 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 mysql-client-core-8.0 amd64 8.0.31-0ubuntu0.20.04.2 [5,165 kB]
Get:82 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 mysql-client-8.0 amd64 8.0.31-0ubuntu0.20.04.2 [22.0 kB]
Get:83 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 mysql-server-8.0 amd64 8.0.31-0ubuntu0.20.04.2 [1,311 kB]
Get:84 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 mysql-server-core-8.0 amd64 8.0.31-0ubuntu0.20.04.2 [22.5 MB]
Get:85 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 passwd amd64 1:4.8.1-1ubuntu5.20.04.4 [799 kB]
Get:86 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libpcre3 amd64 2:8.39-12ubuntu0.1 [232 kB]
Get:87 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libsepol1 amd64 3.0-1ubuntu0.1 [252 kB]
Get:88 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libss2 amd64 1.45.5-2ubuntu1.1 [11.3 kB]
Get:89 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 openssl amd64 1.1.1f-1ubuntu2.16 [621 kB]
Get:90 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 ca-certificates all 20211016ubuntu0.20.04.1 [141 kB]
Get:91 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 distro-info-data all 0.43ubuntu1.11 [4,672 B]
Get:92 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libfribidi0 amd64 1.0.8-2ubuntu0.1 [24.2 kB]
Get:93 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libxml2 amd64 2.9.10+dfsg-5ubuntu0.20.04.5 [640 kB]
Get:94 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 networkd-dispatcher all 2.1-2~ubuntu20.04.3 [15.5 kB]
Get:95 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 tzdata all 2022g-0ubuntu0.20.04.1 [286 kB]
Get:96 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 vim amd64 2:8.1.2269-1ubuntu5.9 [1,238 kB]
Get:97 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 vim-runtime all 2:8.1.2269-1ubuntu5.9 [5,873 kB]
Get:98 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 xxd amd64 2:8.1.2269-1ubuntu5.9 [50.0 kB]
Get:99 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 vim-common all 2:8.1.2269-1ubuntu5.9 [85.0 kB]
Get:100 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 xz-utils amd64 5.2.4-1ubuntu1.1 [82.6 kB]
Get:101 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 bind9-dnsutils amd64 1:9.16.1-0ubuntu2.11 [134 kB]
Get:102 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 bind9-libs amd64 1:9.16.1-0ubuntu2.11 [1,108 kB]
Get:103 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 bind9-host amd64 1:9.16.1-0ubuntu2.11 [43.0 kB]
Get:104 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libkeyutils1 amd64 1.6-6ubuntu1.1 [10.3 kB]
Get:105 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 openssh-sftp-server amd64 1:8.2p1-4ubuntu0.5 [51.5 kB]
Get:106 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 openssh-server amd64 1:8.2p1-4ubuntu0.5 [377 kB]
Get:107 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 git-man all 1:2.25.1-1ubuntu3.6 [887 kB]
Get:108 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libcurl3-gnutls amd64 7.68.0-1ubuntu2.14 [233 kB]
Get:109 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 git amd64 1:2.25.1-1ubuntu3.6 [4,529 kB]
Get:110 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 openssh-client amd64 1:8.2p1-4ubuntu0.5 [671 kB]
Get:111 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 python-apt-common all 2.0.0ubuntu0.20.04.8 [17.1 kB]
Get:112 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 python3-apt amd64 2.0.0ubuntu0.20.04.8 [154 kB]
Get:113 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 alsa-ucm-conf all 1.2.2-1ubuntu0.13 [27.0 kB]
Get:114 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libctf0 amd64 2.34-6ubuntu1.4 [46.6 kB]
Get:115 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 binutils-x86-64-linux-gnu amd64 2.34-6ubuntu1.4 [1,613 kB]
Get:116 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libbinutils amd64 2.34-6ubuntu1.4 [474 kB]
Get:117 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 binutils amd64 2.34-6ubuntu1.4 [3,380 B]
Get:118 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 binutils-common amd64 2.34-6ubuntu1.4 [207 kB]
Get:119 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libctf-nobfd0 amd64 2.34-6ubuntu1.4 [47.2 kB]
Get:120 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 curl amd64 7.68.0-1ubuntu2.14 [161 kB]
Get:121 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libcurl4 amd64 7.68.0-1ubuntu2.14 [235 kB]
Get:122 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 dbus-user-session amd64 1.12.16-2ubuntu2.3 [9,424 B]
Get:123 http://archive.ubuntu.com/ubuntu focal-updates/universe amd64 dnsutils all 1:9.16.1-0ubuntu2.11 [2,756 B]
Get:124 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 dpkg-dev all 1.19.7ubuntu3.2 [679 kB]
Get:125 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libdpkg-perl all 1.19.7ubuntu3.2 [231 kB]
Get:126 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 ghostscript amd64 9.50~dfsg-5ubuntu4.6 [51.8 kB]
Get:127 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libgs9 amd64 9.50~dfsg-5ubuntu4.6 [2,173 kB]
Get:128 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libgs9-common all 9.50~dfsg-5ubuntu4.6 [681 kB]
Get:129 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libcups2 amd64 2.3.1-9ubuntu1.2 [233 kB]
Get:130 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libfreetype-dev amd64 2.10.1-2ubuntu0.2 [493 kB]
Get:131 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libfreetype6-dev amd64 2.10.1-2ubuntu0.2 [9,812 B]
Get:132 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libfreetype6 amd64 2.10.1-2ubuntu0.2 [341 kB]
Get:133 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libjbig0 amd64 2.1-3.1ubuntu0.20.04.1 [27.3 kB]
Get:134 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libtiff5 amd64 4.1.0+git191117-2ubuntu0.20.04.7 [163 kB]
Get:135 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libgdk-pixbuf2.0-0 amd64 2.40.0+dfsg-3ubuntu0.4 [168 kB]
Get:136 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libgdk-pixbuf2.0-common all 2.40.0+dfsg-3ubuntu0.4 [4,592 B]
Get:137 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libgdk-pixbuf2.0-bin amd64 2.40.0+dfsg-3ubuntu0.4 [14.1 kB]
Get:138 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libgstreamer1.0-0 amd64 1.16.3-0ubuntu1.1 [894 kB]
Get:139 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libharfbuzz0b amd64 2.6.4-1ubuntu4.2 [391 kB]
Get:140 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libjpeg-turbo8 amd64 2.0.3-0ubuntu1.20.04.3 [118 kB]
Get:141 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libmysqlclient-dev amd64 8.0.31-0ubuntu0.20.04.2 [1,658 kB]
Get:142 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libmysqlclient21 amd64 8.0.31-0ubuntu0.20.04.2 [1,327 kB]
Get:143 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libpixman-1-0 amd64 0.38.4-0ubuntu2.1 [227 kB]
Get:144 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libsensors-config all 1:3.6.0-2ubuntu1.1 [6,052 B]
Get:145 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libsensors5 amd64 1:3.6.0-2ubuntu1.1 [27.2 kB]
Get:146 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libwayland-client0 amd64 1.18.0-1ubuntu0.1 [23.9 kB]
Get:147 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libwayland-cursor0 amd64 1.18.0-1ubuntu0.1 [10.3 kB]
Get:148 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 libwayland-egl1 amd64 1.18.0-1ubuntu0.1 [5,596 B]
Get:149 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 mysql-server all 8.0.31-0ubuntu0.20.04.2 [9,540 B]
Get:150 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 unattended-upgrades all 2.3ubuntu0.3 [48.5 kB]
Get:151 http://archive.ubuntu.com/ubuntu focal-updates/main amd64 unzip amd64 6.0-25ubuntu1.1 [168 kB]
Fetched 140 MB in 20s (6,908 kB/s)
debconf: delaying package configuration, since apt-utils is not installed
(Reading database ... 76367 files and directories currently installed.)
Preparing to unpack .../0-libc6-dbg_2.31-0ubuntu9.9_amd64.deb ...
Unpacking libc6-dbg:amd64 (2.31-0ubuntu9.9) over (2.31-0ubuntu9.7) ...
Preparing to unpack .../1-libc6-dev-x32_2.31-0ubuntu9.9_amd64.deb ...
Unpacking libc6-dev-x32 (2.31-0ubuntu9.9) over (2.31-0ubuntu9.7) ...
Preparing to unpack .../2-libc6-dev-i386_2.31-0ubuntu9.9_amd64.deb ...
Unpacking libc6-dev-i386 (2.31-0ubuntu9.9) over (2.31-0ubuntu9.7) ...
Preparing to unpack .../3-libc6-i386_2.31-0ubuntu9.9_amd64.deb ...
Unpacking libc6-i386 (2.31-0ubuntu9.9) over (2.31-0ubuntu9.7) ...
Preparing to unpack .../4-libc6-dev_2.31-0ubuntu9.9_amd64.deb ...
Unpacking libc6-dev:amd64 (2.31-0ubuntu9.9) over (2.31-0ubuntu9.7) ...
Preparing to unpack .../5-libc-dev-bin_2.31-0ubuntu9.9_amd64.deb ...
Unpacking libc-dev-bin (2.31-0ubuntu9.9) over (2.31-0ubuntu9.7) ...
Preparing to unpack .../6-linux-libc-dev_5.4.0-135.152_amd64.deb ...
Unpacking linux-libc-dev:amd64 (5.4.0-135.152) over (5.4.0-105.119) ...
Preparing to unpack .../7-libc6-x32_2.31-0ubuntu9.9_amd64.deb ...
Unpacking libc6-x32 (2.31-0ubuntu9.9) over (2.31-0ubuntu9.7) ...
Preparing to unpack .../8-libc6_2.31-0ubuntu9.9_amd64.deb ...
debconf: unable to initialize frontend: Dialog
debconf: (No usable dialog-like program is installed, so the dialog based frontend cannot be used. at /usr/share/perl5/Debconf/FrontEnd/Dialog.pm line 76.)
debconf: falling back to frontend: Readline
Unpacking libc6:amd64 (2.31-0ubuntu9.9) over (2.31-0ubuntu9.7) ...
Setting up libc6:amd64 (2.31-0ubuntu9.9) ...
debconf: unable to initialize frontend: Dialog
debconf: (No usable dialog-like program is installed, so the dialog based frontend cannot be used. at /usr/share/perl5/Debconf/FrontEnd/Dialog.pm line 76.)
debconf: falling back to frontend: Readline
(Reading database ... 76524 files and directories currently installed.)
Preparing to unpack .../base-files_11ubuntu5.6_amd64.deb ...
Unpacking base-files (11ubuntu5.6) over (11ubuntu5.5) ...
Setting up base-files (11ubuntu5.6) ...
Installing new version of config file /etc/issue ...
Installing new version of config file /etc/issue.net ...
Installing new version of config file /etc/lsb-release ...
(Reading database ... 76524 files and directories currently installed.)
Preparing to unpack .../bash_5.0-6ubuntu1.2_amd64.deb ...
Unpacking bash (5.0-6ubuntu1.2) over (5.0-6ubuntu1.1) ...
Setting up bash (5.0-6ubuntu1.2) ...
update-alternatives: using /usr/share/man/man7/bash-builtins.7.gz to provide /usr/share/man/man7/builtins.7.gz (builtins.7.gz) in auto mode
(Reading database ... 76524 files and directories currently installed.)
Preparing to unpack .../dpkg_1.19.7ubuntu3.2_amd64.deb ...
Unpacking dpkg (1.19.7ubuntu3.2) over (1.19.7ubuntu3) ...
Setting up dpkg (1.19.7ubuntu3.2) ...
(Reading database ... 76524 files and directories currently installed.)
Preparing to unpack .../gzip_1.10-0ubuntu4.1_amd64.deb ...
Unpacking gzip (1.10-0ubuntu4.1) over (1.10-0ubuntu4) ...
Setting up gzip (1.10-0ubuntu4.1) ...
(Reading database ... 76524 files and directories currently installed.)
Preparing to unpack .../login_1%3a4.8.1-1ubuntu5.20.04.4_amd64.deb ...
Unpacking login (1:4.8.1-1ubuntu5.20.04.4) over (1:4.8.1-1ubuntu5.20.04.1) ...
Setting up login (1:4.8.1-1ubuntu5.20.04.4) ...
(Reading database ... 76524 files and directories currently installed.)
Preparing to unpack .../libperl5.30_5.30.0-9ubuntu0.3_amd64.deb ...
Unpacking libperl5.30:amd64 (5.30.0-9ubuntu0.3) over (5.30.0-9ubuntu0.2) ...
Preparing to unpack .../perl_5.30.0-9ubuntu0.3_amd64.deb ...
Unpacking perl (5.30.0-9ubuntu0.3) over (5.30.0-9ubuntu0.2) ...
Preparing to unpack .../perl-base_5.30.0-9ubuntu0.3_amd64.deb ...
Unpacking perl-base (5.30.0-9ubuntu0.3) over (5.30.0-9ubuntu0.2) ...
Setting up perl-base (5.30.0-9ubuntu0.3) ...
(Reading database ... 76524 files and directories currently installed.)
Preparing to unpack .../perl-modules-5.30_5.30.0-9ubuntu0.3_all.deb ...
Unpacking perl-modules-5.30 (5.30.0-9ubuntu0.3) over (5.30.0-9ubuntu0.2) ...
Preparing to unpack .../zlib1g-dev_1%3a1.2.11.dfsg-2ubuntu1.5_amd64.deb ...
Unpacking zlib1g-dev:amd64 (1:1.2.11.dfsg-2ubuntu1.5) over (1:1.2.11.dfsg-2ubuntu1.2) ...
Preparing to unpack .../zlib1g_1%3a1.2.11.dfsg-2ubuntu1.5_amd64.deb ...
Unpacking zlib1g:amd64 (1:1.2.11.dfsg-2ubuntu1.5) over (1:1.2.11.dfsg-2ubuntu1.2) ...
Setting up zlib1g:amd64 (1:1.2.11.dfsg-2ubuntu1.5) ...
(Reading database ... 76524 files and directories currently installed.)
Preparing to unpack .../locales_2.31-0ubuntu9.9_all.deb ...
Unpacking locales (2.31-0ubuntu9.9) over (2.31-0ubuntu9.7) ...
Preparing to unpack .../libc-bin_2.31-0ubuntu9.9_amd64.deb ...
Unpacking libc-bin (2.31-0ubuntu9.9) over (2.31-0ubuntu9.7) ...
Setting up libc-bin (2.31-0ubuntu9.9) ...
(Reading database ... 76524 files and directories currently installed.)
Preparing to unpack .../liblzma5_5.2.4-1ubuntu1.1_amd64.deb ...
Unpacking liblzma5:amd64 (5.2.4-1ubuntu1.1) over (5.2.4-1ubuntu1) ...
Setting up liblzma5:amd64 (5.2.4-1ubuntu1.1) ...
(Reading database ... 76524 files and directories currently installed.)
Preparing to unpack .../00-libnss-systemd_245.4-4ubuntu3.19_amd64.deb ...
Unpacking libnss-systemd:amd64 (245.4-4ubuntu3.19) over (245.4-4ubuntu3.15) ...
Preparing to unpack .../01-systemd-timesyncd_245.4-4ubuntu3.19_amd64.deb ...
Unpacking systemd-timesyncd (245.4-4ubuntu3.19) over (245.4-4ubuntu3.15) ...
Preparing to unpack .../02-systemd-sysv_245.4-4ubuntu3.19_amd64.deb ...
Unpacking systemd-sysv (245.4-4ubuntu3.19) over (245.4-4ubuntu3.15) ...
Preparing to unpack .../03-dbus_1.12.16-2ubuntu2.3_amd64.deb ...
Unpacking dbus (1.12.16-2ubuntu2.3) over (1.12.16-2ubuntu2.1) ...
Preparing to unpack .../04-libdbus-1-3_1.12.16-2ubuntu2.3_amd64.deb ...
Unpacking libdbus-1-3:amd64 (1.12.16-2ubuntu2.3) over (1.12.16-2ubuntu2.1) ...
Preparing to unpack .../05-libexpat1-dev_2.2.9-1ubuntu0.6_amd64.deb ...
Unpacking libexpat1-dev:amd64 (2.2.9-1ubuntu0.6) over (2.2.9-1ubuntu0.4) ...
Preparing to unpack .../06-libexpat1_2.2.9-1ubuntu0.6_amd64.deb ...
Unpacking libexpat1:amd64 (2.2.9-1ubuntu0.6) over (2.2.9-1ubuntu0.4) ...
Preparing to unpack .../07-libpam-systemd_245.4-4ubuntu3.19_amd64.deb ...
Unpacking libpam-systemd:amd64 (245.4-4ubuntu3.19) over (245.4-4ubuntu3.15) ...
Preparing to unpack .../08-libgmp-dev_2%3a6.2.0+dfsg-4ubuntu0.1_amd64.deb ...
Unpacking libgmp-dev:amd64 (2:6.2.0+dfsg-4ubuntu0.1) over (2:6.2.0+dfsg-4) ...
Preparing to unpack .../09-libgmpxx4ldbl_2%3a6.2.0+dfsg-4ubuntu0.1_amd64.deb ...
Unpacking libgmpxx4ldbl:amd64 (2:6.2.0+dfsg-4ubuntu0.1) over (2:6.2.0+dfsg-4) ...
Preparing to unpack .../10-libgmp10_2%3a6.2.0+dfsg-4ubuntu0.1_amd64.deb ...
Unpacking libgmp10:amd64 (2:6.2.0+dfsg-4ubuntu0.1) over (2:6.2.0+dfsg-4) ...
Setting up libgmp10:amd64 (2:6.2.0+dfsg-4ubuntu0.1) ...
(Reading database ... 76524 files and directories currently installed.)
Preparing to unpack .../libgnutls30_3.6.13-2ubuntu1.7_amd64.deb ...
Unpacking libgnutls30:amd64 (3.6.13-2ubuntu1.7) over (3.6.13-2ubuntu1.6) ...
Setting up libgnutls30:amd64 (3.6.13-2ubuntu1.7) ...
(Reading database ... 76524 files and directories currently installed.)
Preparing to unpack .../libssl-dev_1.1.1f-1ubuntu2.16_amd64.deb ...
Unpacking libssl-dev:amd64 (1.1.1f-1ubuntu2.16) over (1.1.1f-1ubuntu2.12) ...
Preparing to unpack .../libssl1.1_1.1.1f-1ubuntu2.16_amd64.deb ...
Unpacking libssl1.1:amd64 (1.1.1f-1ubuntu2.16) over (1.1.1f-1ubuntu2.12) ...
Preparing to unpack .../libkmod2_27-1ubuntu2.1_amd64.deb ...
Unpacking libkmod2:amd64 (27-1ubuntu2.1) over (27-1ubuntu2) ...
Preparing to unpack .../libpcre2-8-0_10.34-7ubuntu0.1_amd64.deb ...
Unpacking libpcre2-8-0:amd64 (10.34-7ubuntu0.1) over (10.34-7) ...
Setting up libpcre2-8-0:amd64 (10.34-7ubuntu0.1) ...
(Reading database ... 76524 files and directories currently installed.)
Preparing to unpack .../systemd_245.4-4ubuntu3.19_amd64.deb ...
Unpacking systemd (245.4-4ubuntu3.19) over (245.4-4ubuntu3.15) ...
Preparing to unpack .../libsystemd0_245.4-4ubuntu3.19_amd64.deb ...
Unpacking libsystemd0:amd64 (245.4-4ubuntu3.19) over (245.4-4ubuntu3.15) ...
Setting up libsystemd0:amd64 (245.4-4ubuntu3.19) ...
(Reading database ... 76524 files and directories currently installed.)
Preparing to unpack .../libudev1_245.4-4ubuntu3.19_amd64.deb ...
Unpacking libudev1:amd64 (245.4-4ubuntu3.19) over (245.4-4ubuntu3.15) ...
Setting up libudev1:amd64 (245.4-4ubuntu3.19) ...
(Reading database ... 76524 files and directories currently installed.)
Preparing to unpack .../libapt-pkg6.0_2.0.9_amd64.deb ...
Unpacking libapt-pkg6.0:amd64 (2.0.9) over (2.0.6) ...
Setting up libapt-pkg6.0:amd64 (2.0.9) ...
(Reading database ... 76524 files and directories currently installed.)
Preparing to unpack .../00-libksba8_1.3.5-2ubuntu0.20.04.1_amd64.deb ...
Unpacking libksba8:amd64 (1.3.5-2ubuntu0.20.04.1) over (1.3.5-2) ...
Preparing to unpack .../01-gpg-wks-client_2.2.19-3ubuntu2.2_amd64.deb ...
Unpacking gpg-wks-client (2.2.19-3ubuntu2.2) over (2.2.19-3ubuntu2.1) ...
Preparing to unpack .../02-dirmngr_2.2.19-3ubuntu2.2_amd64.deb ...
Unpacking dirmngr (2.2.19-3ubuntu2.2) over (2.2.19-3ubuntu2.1) ...
Preparing to unpack .../03-gpg-wks-server_2.2.19-3ubuntu2.2_amd64.deb ...
Unpacking gpg-wks-server (2.2.19-3ubuntu2.2) over (2.2.19-3ubuntu2.1) ...
Preparing to unpack .../04-gnupg-utils_2.2.19-3ubuntu2.2_amd64.deb ...
Unpacking gnupg-utils (2.2.19-3ubuntu2.2) over (2.2.19-3ubuntu2.1) ...
Preparing to unpack .../05-gpg-agent_2.2.19-3ubuntu2.2_amd64.deb ...
Unpacking gpg-agent (2.2.19-3ubuntu2.2) over (2.2.19-3ubuntu2.1) ...
Preparing to unpack .../06-gpg_2.2.19-3ubuntu2.2_amd64.deb ...
Unpacking gpg (2.2.19-3ubuntu2.2) over (2.2.19-3ubuntu2.1) ...
Preparing to unpack .../07-gpgconf_2.2.19-3ubuntu2.2_amd64.deb ...
Unpacking gpgconf (2.2.19-3ubuntu2.2) over (2.2.19-3ubuntu2.1) ...
Preparing to unpack .../08-gnupg-l10n_2.2.19-3ubuntu2.2_all.deb ...
Unpacking gnupg-l10n (2.2.19-3ubuntu2.2) over (2.2.19-3ubuntu2.1) ...
Preparing to unpack .../09-gnupg_2.2.19-3ubuntu2.2_all.deb ...
Unpacking gnupg (2.2.19-3ubuntu2.2) over (2.2.19-3ubuntu2.1) ...
Preparing to unpack .../10-gpgsm_2.2.19-3ubuntu2.2_amd64.deb ...
Unpacking gpgsm (2.2.19-3ubuntu2.2) over (2.2.19-3ubuntu2.1) ...
Preparing to unpack .../11-libsqlite3-dev_3.31.1-4ubuntu0.5_amd64.deb ...
Unpacking libsqlite3-dev:amd64 (3.31.1-4ubuntu0.5) over (3.31.1-4ubuntu0.2) ...
Preparing to unpack .../12-libsqlite3-0_3.31.1-4ubuntu0.5_amd64.deb ...
Unpacking libsqlite3-0:amd64 (3.31.1-4ubuntu0.5) over (3.31.1-4ubuntu0.2) ...
Preparing to unpack .../13-libcom-err2_1.45.5-2ubuntu1.1_amd64.deb ...
Unpacking libcom-err2:amd64 (1.45.5-2ubuntu1.1) over (1.45.5-2ubuntu1) ...
Preparing to unpack .../14-libroken18-heimdal_7.7.0+dfsg-1ubuntu1.2_amd64.deb ...
Unpacking libroken18-heimdal:amd64 (7.7.0+dfsg-1ubuntu1.2) over (7.7.0+dfsg-1ubuntu1) ...
Preparing to unpack .../15-libasn1-8-heimdal_7.7.0+dfsg-1ubuntu1.2_amd64.deb ...
Unpacking libasn1-8-heimdal:amd64 (7.7.0+dfsg-1ubuntu1.2) over (7.7.0+dfsg-1ubuntu1) ...
Preparing to unpack .../16-libheimbase1-heimdal_7.7.0+dfsg-1ubuntu1.2_amd64.deb ...
Unpacking libheimbase1-heimdal:amd64 (7.7.0+dfsg-1ubuntu1.2) over (7.7.0+dfsg-1ubuntu1) ...
Preparing to unpack .../17-libhcrypto4-heimdal_7.7.0+dfsg-1ubuntu1.2_amd64.deb ...
Unpacking libhcrypto4-heimdal:amd64 (7.7.0+dfsg-1ubuntu1.2) over (7.7.0+dfsg-1ubuntu1) ...
Preparing to unpack .../18-libwind0-heimdal_7.7.0+dfsg-1ubuntu1.2_amd64.deb ...
Unpacking libwind0-heimdal:amd64 (7.7.0+dfsg-1ubuntu1.2) over (7.7.0+dfsg-1ubuntu1) ...
Preparing to unpack .../19-libhx509-5-heimdal_7.7.0+dfsg-1ubuntu1.2_amd64.deb ...
Unpacking libhx509-5-heimdal:amd64 (7.7.0+dfsg-1ubuntu1.2) over (7.7.0+dfsg-1ubuntu1) ...
Preparing to unpack .../20-libkrb5-26-heimdal_7.7.0+dfsg-1ubuntu1.2_amd64.deb ...
Unpacking libkrb5-26-heimdal:amd64 (7.7.0+dfsg-1ubuntu1.2) over (7.7.0+dfsg-1ubuntu1) ...
Preparing to unpack .../21-libheimntlm0-heimdal_7.7.0+dfsg-1ubuntu1.2_amd64.deb ...
Unpacking libheimntlm0-heimdal:amd64 (7.7.0+dfsg-1ubuntu1.2) over (7.7.0+dfsg-1ubuntu1) ...
Preparing to unpack .../22-libgssapi3-heimdal_7.7.0+dfsg-1ubuntu1.2_amd64.deb ...
Unpacking libgssapi3-heimdal:amd64 (7.7.0+dfsg-1ubuntu1.2) over (7.7.0+dfsg-1ubuntu1) ...
Preparing to unpack .../23-libldap-common_2.4.49+dfsg-2ubuntu1.9_all.deb ...
Unpacking libldap-common (2.4.49+dfsg-2ubuntu1.9) over (2.4.49+dfsg-2ubuntu1.8) ...
Preparing to unpack .../24-libldap-2.4-2_2.4.49+dfsg-2ubuntu1.9_amd64.deb ...
Unpacking libldap-2.4-2:amd64 (2.4.49+dfsg-2ubuntu1.9) over (2.4.49+dfsg-2ubuntu1.8) ...
Preparing to unpack .../25-gpgv_2.2.19-3ubuntu2.2_amd64.deb ...
Unpacking gpgv (2.2.19-3ubuntu2.2) over (2.2.19-3ubuntu2.1) ...
Setting up gpgv (2.2.19-3ubuntu2.2) ...
(Reading database ... 76524 files and directories currently installed.)
Preparing to unpack .../archives/apt_2.0.9_amd64.deb ...
Unpacking apt (2.0.9) over (2.0.6) ...
Setting up apt (2.0.9) ...
Removing obsolete conffile /etc/kernel/postinst.d/apt-auto-removal ...
(Reading database ... 76523 files and directories currently installed.)
Preparing to unpack .../logsave_1.45.5-2ubuntu1.1_amd64.deb ...
Unpacking logsave (1.45.5-2ubuntu1.1) over (1.45.5-2ubuntu1) ...
Preparing to unpack .../libext2fs2_1.45.5-2ubuntu1.1_amd64.deb ...
Unpacking libext2fs2:amd64 (1.45.5-2ubuntu1.1) over (1.45.5-2ubuntu1) ...
Setting up libcom-err2:amd64 (1.45.5-2ubuntu1.1) ...
Setting up libext2fs2:amd64 (1.45.5-2ubuntu1.1) ...
(Reading database ... 76523 files and directories currently installed.)
Preparing to unpack .../00-e2fsprogs_1.45.5-2ubuntu1.1_amd64.deb ...
Unpacking e2fsprogs (1.45.5-2ubuntu1.1) over (1.45.5-2ubuntu1) ...
Preparing to unpack .../01-python3.8-dev_3.8.10-0ubuntu1~20.04.6_amd64.deb ...
Unpacking python3.8-dev (3.8.10-0ubuntu1~20.04.6) over (3.8.10-0ubuntu1~20.04.4) ...
Preparing to unpack .../02-libpython3.8-dev_3.8.10-0ubuntu1~20.04.6_amd64.deb ...
Unpacking libpython3.8-dev:amd64 (3.8.10-0ubuntu1~20.04.6) over (3.8.10-0ubuntu1~20.04.4) ...
Preparing to unpack .../03-libpython3.8_3.8.10-0ubuntu1~20.04.6_amd64.deb ...
Unpacking libpython3.8:amd64 (3.8.10-0ubuntu1~20.04.6) over (3.8.10-0ubuntu1~20.04.4) ...
Preparing to unpack .../04-python3.8_3.8.10-0ubuntu1~20.04.6_amd64.deb ...
Unpacking python3.8 (3.8.10-0ubuntu1~20.04.6) over (3.8.10-0ubuntu1~20.04.4) ...
Preparing to unpack .../05-libpython3.8-stdlib_3.8.10-0ubuntu1~20.04.6_amd64.deb ...
Unpacking libpython3.8-stdlib:amd64 (3.8.10-0ubuntu1~20.04.6) over (3.8.10-0ubuntu1~20.04.4) ...
Preparing to unpack .../06-python3.8-minimal_3.8.10-0ubuntu1~20.04.6_amd64.deb ...
Unpacking python3.8-minimal (3.8.10-0ubuntu1~20.04.6) over (3.8.10-0ubuntu1~20.04.4) ...
Preparing to unpack .../07-libpython3.8-minimal_3.8.10-0ubuntu1~20.04.6_amd64.deb ...
Unpacking libpython3.8-minimal:amd64 (3.8.10-0ubuntu1~20.04.6) over (3.8.10-0ubuntu1~20.04.4) ...
Preparing to unpack .../08-mysql-client-core-8.0_8.0.31-0ubuntu0.20.04.2_amd64.deb ...
Unpacking mysql-client-core-8.0 (8.0.31-0ubuntu0.20.04.2) over (8.0.28-0ubuntu0.20.04.3) ...
Preparing to unpack .../09-mysql-client-8.0_8.0.31-0ubuntu0.20.04.2_amd64.deb ...
Unpacking mysql-client-8.0 (8.0.31-0ubuntu0.20.04.2) over (8.0.28-0ubuntu0.20.04.3) ...
Preparing to unpack .../10-mysql-server-8.0_8.0.31-0ubuntu0.20.04.2_amd64.deb ...
debconf: unable to initialize frontend: Dialog
debconf: (No usable dialog-like program is installed, so the dialog based frontend cannot be used. at /usr/share/perl5/Debconf/FrontEnd/Diale 76.)
debconf: falling back to frontend: Readline
invoke-rc.d: could not determine current runlevel
invoke-rc.d: policy-rc.d denied execution of stop.
debconf: unable to initialize frontend: Dialog
debconf: (No usable dialog-like program is installed, so the dialog based frontend cannot be used. at /usr/share/perl5/Debconf/FrontEnd/Diale 76.)
debconf: falling back to frontend: Readline
invoke-rc.d: could not determine current runlevel
invoke-rc.d: policy-rc.d denied execution of stop.
Unpacking mysql-server-8.0 (8.0.31-0ubuntu0.20.04.2) over (8.0.28-0ubuntu0.20.04.3) ...
debconf: unable to initialize frontend: Dialog
debconf: (No usable dialog-like program is installed, so the dialog based frontend cannot be used. at /usr/share/perl5/Debconf/FrontEnd/Diale 76.)
debconf: falling back to frontend: Readline
Preparing to unpack .../11-mysql-server-core-8.0_8.0.31-0ubuntu0.20.04.2_amd64.deb ...
Unpacking mysql-server-core-8.0 (8.0.31-0ubuntu0.20.04.2) over (8.0.28-0ubuntu0.20.04.3) ...
Preparing to unpack .../12-passwd_1%3a4.8.1-1ubuntu5.20.04.4_amd64.deb ...
Unpacking passwd (1:4.8.1-1ubuntu5.20.04.4) over (1:4.8.1-1ubuntu5.20.04.1) ...
Setting up passwd (1:4.8.1-1ubuntu5.20.04.4) ...
(Reading database ... 76523 files and directories currently installed.)
Preparing to unpack .../libpcre3_2%3a8.39-12ubuntu0.1_amd64.deb ...
Unpacking libpcre3:amd64 (2:8.39-12ubuntu0.1) over (2:8.39-12build1) ...
Setting up libpcre3:amd64 (2:8.39-12ubuntu0.1) ...
(Reading database ... 76523 files and directories currently installed.)
Preparing to unpack .../libsepol1_3.0-1ubuntu0.1_amd64.deb ...
Unpacking libsepol1:amd64 (3.0-1ubuntu0.1) over (3.0-1) ...
Setting up libsepol1:amd64 (3.0-1ubuntu0.1) ...
(Reading database ... 76523 files and directories currently installed.)
Preparing to unpack .../00-libss2_1.45.5-2ubuntu1.1_amd64.deb ...
Unpacking libss2:amd64 (1.45.5-2ubuntu1.1) over (1.45.5-2ubuntu1) ...
Preparing to unpack .../01-openssl_1.1.1f-1ubuntu2.16_amd64.deb ...
Unpacking openssl (1.1.1f-1ubuntu2.16) over (1.1.1f-1ubuntu2.12) ...
Preparing to unpack .../02-ca-certificates_20211016ubuntu0.20.04.1_all.deb ...
Unpacking ca-certificates (20211016ubuntu0.20.04.1) over (20210119~20.04.2) ...
Preparing to unpack .../03-distro-info-data_0.43ubuntu1.11_all.deb ...
Unpacking distro-info-data (0.43ubuntu1.11) over (0.43ubuntu1.9) ...
Preparing to unpack .../04-libfribidi0_1.0.8-2ubuntu0.1_amd64.deb ...
Unpacking libfribidi0:amd64 (1.0.8-2ubuntu0.1) over (1.0.8-2) ...
Preparing to unpack .../05-libxml2_2.9.10+dfsg-5ubuntu0.20.04.5_amd64.deb ...
Unpacking libxml2:amd64 (2.9.10+dfsg-5ubuntu0.20.04.5) over (2.9.10+dfsg-5ubuntu0.20.04.2) ...
Preparing to unpack .../06-networkd-dispatcher_2.1-2~ubuntu20.04.3_all.deb ...
Unpacking networkd-dispatcher (2.1-2~ubuntu20.04.3) over (2.1-2~ubuntu20.04.1) ...
Preparing to unpack .../07-tzdata_2022g-0ubuntu0.20.04.1_all.deb ...
Unpacking tzdata (2022g-0ubuntu0.20.04.1) over (2022a-0ubuntu0.20.04) ...
Preparing to unpack .../08-vim_2%3a8.1.2269-1ubuntu5.9_amd64.deb ...
Unpacking vim (2:8.1.2269-1ubuntu5.9) over (2:8.1.2269-1ubuntu5.7) ...
Preparing to unpack .../09-vim-runtime_2%3a8.1.2269-1ubuntu5.9_all.deb ...
Unpacking vim-runtime (2:8.1.2269-1ubuntu5.9) over (2:8.1.2269-1ubuntu5.7) ...
Preparing to unpack .../10-xxd_2%3a8.1.2269-1ubuntu5.9_amd64.deb ...
Unpacking xxd (2:8.1.2269-1ubuntu5.9) over (2:8.1.2269-1ubuntu5.7) ...
Preparing to unpack .../11-vim-common_2%3a8.1.2269-1ubuntu5.9_all.deb ...
Unpacking vim-common (2:8.1.2269-1ubuntu5.9) over (2:8.1.2269-1ubuntu5.7) ...
Preparing to unpack .../12-xz-utils_5.2.4-1ubuntu1.1_amd64.deb ...
Unpacking xz-utils (5.2.4-1ubuntu1.1) over (5.2.4-1ubuntu1) ...
Preparing to unpack .../13-bind9-dnsutils_1%3a9.16.1-0ubuntu2.11_amd64.deb ...
Unpacking bind9-dnsutils (1:9.16.1-0ubuntu2.11) over (1:9.16.1-0ubuntu2.10) ...
Preparing to unpack .../14-bind9-libs_1%3a9.16.1-0ubuntu2.11_amd64.deb ...
Unpacking bind9-libs:amd64 (1:9.16.1-0ubuntu2.11) over (1:9.16.1-0ubuntu2.10) ...
Preparing to unpack .../15-bind9-host_1%3a9.16.1-0ubuntu2.11_amd64.deb ...
Unpacking bind9-host (1:9.16.1-0ubuntu2.11) over (1:9.16.1-0ubuntu2.10) ...
Preparing to unpack .../16-libkeyutils1_1.6-6ubuntu1.1_amd64.deb ...
Unpacking libkeyutils1:amd64 (1.6-6ubuntu1.1) over (1.6-6ubuntu1) ...
Preparing to unpack .../17-openssh-sftp-server_1%3a8.2p1-4ubuntu0.5_amd64.deb ...
Unpacking openssh-sftp-server (1:8.2p1-4ubuntu0.5) over (1:8.2p1-4ubuntu0.4) ...
Preparing to unpack .../18-openssh-server_1%3a8.2p1-4ubuntu0.5_amd64.deb ...
Unpacking openssh-server (1:8.2p1-4ubuntu0.5) over (1:8.2p1-4ubuntu0.4) ...
Preparing to unpack .../19-git-man_1%3a2.25.1-1ubuntu3.6_all.deb ...
Unpacking git-man (1:2.25.1-1ubuntu3.6) over (1:2.25.1-1ubuntu3.2) ...
Preparing to unpack .../20-libcurl3-gnutls_7.68.0-1ubuntu2.14_amd64.deb ...
Unpacking libcurl3-gnutls:amd64 (7.68.0-1ubuntu2.14) over (7.68.0-1ubuntu2.7) ...
Preparing to unpack .../21-git_1%3a2.25.1-1ubuntu3.6_amd64.deb ...
Unpacking git (1:2.25.1-1ubuntu3.6) over (1:2.25.1-1ubuntu3.2) ...
Preparing to unpack .../22-openssh-client_1%3a8.2p1-4ubuntu0.5_amd64.deb ...
Unpacking openssh-client (1:8.2p1-4ubuntu0.5) over (1:8.2p1-4ubuntu0.4) ...
Preparing to unpack .../23-python-apt-common_2.0.0ubuntu0.20.04.8_all.deb ...
Unpacking python-apt-common (2.0.0ubuntu0.20.04.8) over (2.0.0ubuntu0.20.04.7) ...
Preparing to unpack .../24-python3-apt_2.0.0ubuntu0.20.04.8_amd64.deb ...
Unpacking python3-apt (2.0.0ubuntu0.20.04.8) over (2.0.0ubuntu0.20.04.7) ...
Preparing to unpack .../25-alsa-ucm-conf_1.2.2-1ubuntu0.13_all.deb ...
Unpacking alsa-ucm-conf (1.2.2-1ubuntu0.13) over (1.2.2-1ubuntu0.12) ...
Preparing to unpack .../26-libctf0_2.34-6ubuntu1.4_amd64.deb ...
Unpacking libctf0:amd64 (2.34-6ubuntu1.4) over (2.34-6ubuntu1.3) ...
Preparing to unpack .../27-binutils-x86-64-linux-gnu_2.34-6ubuntu1.4_amd64.deb ...
Unpacking binutils-x86-64-linux-gnu (2.34-6ubuntu1.4) over (2.34-6ubuntu1.3) ...
Preparing to unpack .../28-libbinutils_2.34-6ubuntu1.4_amd64.deb ...
Unpacking libbinutils:amd64 (2.34-6ubuntu1.4) over (2.34-6ubuntu1.3) ...
Preparing to unpack .../29-binutils_2.34-6ubuntu1.4_amd64.deb ...
Unpacking binutils (2.34-6ubuntu1.4) over (2.34-6ubuntu1.3) ...
Preparing to unpack .../30-binutils-common_2.34-6ubuntu1.4_amd64.deb ...
Unpacking binutils-common:amd64 (2.34-6ubuntu1.4) over (2.34-6ubuntu1.3) ...
Preparing to unpack .../31-libctf-nobfd0_2.34-6ubuntu1.4_amd64.deb ...
Unpacking libctf-nobfd0:amd64 (2.34-6ubuntu1.4) over (2.34-6ubuntu1.3) ...
Preparing to unpack .../32-curl_7.68.0-1ubuntu2.14_amd64.deb ...
Unpacking curl (7.68.0-1ubuntu2.14) over (7.68.0-1ubuntu2.7) ...
Preparing to unpack .../33-libcurl4_7.68.0-1ubuntu2.14_amd64.deb ...
Unpacking libcurl4:amd64 (7.68.0-1ubuntu2.14) over (7.68.0-1ubuntu2.7) ...
Preparing to unpack .../34-dbus-user-session_1.12.16-2ubuntu2.3_amd64.deb ...
Unpacking dbus-user-session (1.12.16-2ubuntu2.3) over (1.12.16-2ubuntu2.1) ...
Preparing to unpack .../35-dnsutils_1%3a9.16.1-0ubuntu2.11_all.deb ...
Unpacking dnsutils (1:9.16.1-0ubuntu2.11) over (1:9.16.1-0ubuntu2.10) ...
Preparing to unpack .../36-dpkg-dev_1.19.7ubuntu3.2_all.deb ...
Unpacking dpkg-dev (1.19.7ubuntu3.2) over (1.19.7ubuntu3) ...
Preparing to unpack .../37-libdpkg-perl_1.19.7ubuntu3.2_all.deb ...
Unpacking libdpkg-perl (1.19.7ubuntu3.2) over (1.19.7ubuntu3) ...
Preparing to unpack .../38-ghostscript_9.50~dfsg-5ubuntu4.6_amd64.deb ...
Unpacking ghostscript (9.50~dfsg-5ubuntu4.6) over (9.50~dfsg-5ubuntu4.5) ...
Preparing to unpack .../39-libgs9_9.50~dfsg-5ubuntu4.6_amd64.deb ...
Unpacking libgs9:amd64 (9.50~dfsg-5ubuntu4.6) over (9.50~dfsg-5ubuntu4.5) ...
Preparing to unpack .../40-libgs9-common_9.50~dfsg-5ubuntu4.6_all.deb ...
Unpacking libgs9-common (9.50~dfsg-5ubuntu4.6) over (9.50~dfsg-5ubuntu4.5) ...
Preparing to unpack .../41-libcups2_2.3.1-9ubuntu1.2_amd64.deb ...
Unpacking libcups2:amd64 (2.3.1-9ubuntu1.2) over (2.3.1-9ubuntu1.1) ...
Preparing to unpack .../42-libfreetype-dev_2.10.1-2ubuntu0.2_amd64.deb ...
Unpacking libfreetype-dev:amd64 (2.10.1-2ubuntu0.2) over (2.10.1-2ubuntu0.1) ...
Preparing to unpack .../43-libfreetype6-dev_2.10.1-2ubuntu0.2_amd64.deb ...
Unpacking libfreetype6-dev:amd64 (2.10.1-2ubuntu0.2) over (2.10.1-2ubuntu0.1) ...
Preparing to unpack .../44-libfreetype6_2.10.1-2ubuntu0.2_amd64.deb ...
Unpacking libfreetype6:amd64 (2.10.1-2ubuntu0.2) over (2.10.1-2ubuntu0.1) ...
Preparing to unpack .../45-libjbig0_2.1-3.1ubuntu0.20.04.1_amd64.deb ...
Unpacking libjbig0:amd64 (2.1-3.1ubuntu0.20.04.1) over (2.1-3.1build1) ...
Preparing to unpack .../46-libtiff5_4.1.0+git191117-2ubuntu0.20.04.7_amd64.deb ...
Unpacking libtiff5:amd64 (4.1.0+git191117-2ubuntu0.20.04.7) over (4.1.0+git191117-2ubuntu0.20.04.2) ...
Preparing to unpack .../47-libgdk-pixbuf2.0-0_2.40.0+dfsg-3ubuntu0.4_amd64.deb ...
Unpacking libgdk-pixbuf2.0-0:amd64 (2.40.0+dfsg-3ubuntu0.4) over (2.40.0+dfsg-3ubuntu0.2) ...
Preparing to unpack .../48-libgdk-pixbuf2.0-common_2.40.0+dfsg-3ubuntu0.4_all.deb ...
Unpacking libgdk-pixbuf2.0-common (2.40.0+dfsg-3ubuntu0.4) over (2.40.0+dfsg-3ubuntu0.2) ...
Preparing to unpack .../49-libgdk-pixbuf2.0-bin_2.40.0+dfsg-3ubuntu0.4_amd64.deb ...
Unpacking libgdk-pixbuf2.0-bin (2.40.0+dfsg-3ubuntu0.4) over (2.40.0+dfsg-3ubuntu0.2) ...
Preparing to unpack .../50-libgstreamer1.0-0_1.16.3-0ubuntu1.1_amd64.deb ...
Unpacking libgstreamer1.0-0:amd64 (1.16.3-0ubuntu1.1) over (1.16.2-2) ...
Preparing to unpack .../51-libharfbuzz0b_2.6.4-1ubuntu4.2_amd64.deb ...
Unpacking libharfbuzz0b:amd64 (2.6.4-1ubuntu4.2) over (2.6.4-1ubuntu4) ...
Preparing to unpack .../52-libjpeg-turbo8_2.0.3-0ubuntu1.20.04.3_amd64.deb ...
Unpacking libjpeg-turbo8:amd64 (2.0.3-0ubuntu1.20.04.3) over (2.0.3-0ubuntu1.20.04.1) ...
Preparing to unpack .../53-libmysqlclient-dev_8.0.31-0ubuntu0.20.04.2_amd64.deb ...
Unpacking libmysqlclient-dev (8.0.31-0ubuntu0.20.04.2) over (8.0.28-0ubuntu0.20.04.3) ...
Preparing to unpack .../54-libmysqlclient21_8.0.31-0ubuntu0.20.04.2_amd64.deb ...
Unpacking libmysqlclient21:amd64 (8.0.31-0ubuntu0.20.04.2) over (8.0.28-0ubuntu0.20.04.3) ...
Preparing to unpack .../55-libpixman-1-0_0.38.4-0ubuntu2.1_amd64.deb ...
Unpacking libpixman-1-0:amd64 (0.38.4-0ubuntu2.1) over (0.38.4-0ubuntu1) ...
Preparing to unpack .../56-libsensors-config_1%3a3.6.0-2ubuntu1.1_all.deb ...
Unpacking libsensors-config (1:3.6.0-2ubuntu1.1) over (1:3.6.0-2ubuntu1) ...
Preparing to unpack .../57-libsensors5_1%3a3.6.0-2ubuntu1.1_amd64.deb ...
Unpacking libsensors5:amd64 (1:3.6.0-2ubuntu1.1) over (1:3.6.0-2ubuntu1) ...
Preparing to unpack .../58-libwayland-client0_1.18.0-1ubuntu0.1_amd64.deb ...
Unpacking libwayland-client0:amd64 (1.18.0-1ubuntu0.1) over (1.18.0-1) ...
Preparing to unpack .../59-libwayland-cursor0_1.18.0-1ubuntu0.1_amd64.deb ...
Unpacking libwayland-cursor0:amd64 (1.18.0-1ubuntu0.1) over (1.18.0-1) ...
Preparing to unpack .../60-libwayland-egl1_1.18.0-1ubuntu0.1_amd64.deb ...
Unpacking libwayland-egl1:amd64 (1.18.0-1ubuntu0.1) over (1.18.0-1) ...
Preparing to unpack .../61-mysql-server_8.0.31-0ubuntu0.20.04.2_all.deb ...
Unpacking mysql-server (8.0.31-0ubuntu0.20.04.2) over (8.0.28-0ubuntu0.20.04.3) ...
Preparing to unpack .../62-unattended-upgrades_2.3ubuntu0.3_all.deb ...
Unpacking unattended-upgrades (2.3ubuntu0.3) over (2.3ubuntu0.1) ...
Preparing to unpack .../63-unzip_6.0-25ubuntu1.1_amd64.deb ...
Unpacking unzip (6.0-25ubuntu1.1) over (6.0-25ubuntu1) ...
Setting up libksba8:amd64 (1.3.5-2ubuntu0.20.04.1) ...
Setting up libgs9-common (9.50~dfsg-5ubuntu4.6) ...
Setting up libexpat1:amd64 (2.2.9-1ubuntu0.6) ...
Setting up libpixman-1-0:amd64 (0.38.4-0ubuntu2.1) ...
Setting up libkeyutils1:amd64 (1.6-6ubuntu1.1) ...
Setting up perl-modules-5.30 (5.30.0-9ubuntu0.3) ...
Setting up alsa-ucm-conf (1.2.2-1ubuntu0.13) ...
Setting up distro-info-data (0.43ubuntu1.11) ...
Setting up libssl1.1:amd64 (1.1.1f-1ubuntu2.16) ...
debconf: unable to initialize frontend: Dialog
debconf: (No usable dialog-like program is installed, so the dialog based frontend cannot be used. at /usr/share/perl5/Debconf/FrontEnd/Diale 76.)
debconf: falling back to frontend: Readline
Setting up unzip (6.0-25ubuntu1.1) ...
Setting up libsqlite3-0:amd64 (3.31.1-4ubuntu0.5) ...
Setting up libgdk-pixbuf2.0-common (2.40.0+dfsg-3ubuntu0.4) ...
Setting up binutils-common:amd64 (2.34-6ubuntu1.4) ...
Setting up libsensors-config (1:3.6.0-2ubuntu1.1) ...
Setting up linux-libc-dev:amd64 (5.4.0-135.152) ...
Setting up libctf-nobfd0:amd64 (2.34-6ubuntu1.4) ...
Setting up locales (2.31-0ubuntu9.9) ...
debconf: unable to initialize frontend: Dialog
debconf: (No usable dialog-like program is installed, so the dialog based frontend cannot be used. at /usr/share/perl5/Debconf/FrontEnd/Diale 76.)
debconf: falling back to frontend: Readline
Generating locales (this might take a while)...
  en_US.UTF-8... done
Generation complete.
Setting up libldap-common (2.4.49+dfsg-2ubuntu1.9) ...
Setting up libjbig0:amd64 (2.1-3.1ubuntu0.20.04.1) ...
Setting up xxd (2:8.1.2269-1ubuntu5.9) ...
Setting up libc6-dbg:amd64 (2.31-0ubuntu9.9) ...
Setting up libc6-x32 (2.31-0ubuntu9.9) ...
Setting up tzdata (2022g-0ubuntu0.20.04.1) ...
debconf: unable to initialize frontend: Dialog
debconf: (No usable dialog-like program is installed, so the dialog based frontend cannot be used. at /usr/share/perl5/Debconf/FrontEnd/Diale 76.)
debconf: falling back to frontend: Readline

Current default time zone: 'Etc/UTC'
Local time is now:      Fri Dec 16 07:49:14 UTC 2022.
Universal Time is now:  Fri Dec 16 07:49:14 UTC 2022.
Run 'dpkg-reconfigure tzdata' if you wish to change it.

Setting up libgmpxx4ldbl:amd64 (2:6.2.0+dfsg-4ubuntu0.1) ...
Setting up vim-common (2:8.1.2269-1ubuntu5.9) ...
Setting up libfreetype6:amd64 (2.10.1-2ubuntu0.2) ...
Setting up gnupg-l10n (2.2.19-3ubuntu2.2) ...
Setting up libdbus-1-3:amd64 (1.12.16-2ubuntu2.3) ...
Setting up dbus (1.12.16-2ubuntu2.3) ...
Setting up xz-utils (5.2.4-1ubuntu1.1) ...
Setting up libfribidi0:amd64 (1.0.8-2ubuntu0.1) ...
Setting up libssl-dev:amd64 (1.1.1f-1ubuntu2.16) ...
Setting up libss2:amd64 (1.45.5-2ubuntu1.1) ...
Setting up mysql-server-core-8.0 (8.0.31-0ubuntu0.20.04.2) ...
Setting up libsensors5:amd64 (1:3.6.0-2ubuntu1.1) ...
Setting up libjpeg-turbo8:amd64 (2.0.3-0ubuntu1.20.04.3) ...
Setting up logsave (1.45.5-2ubuntu1.1) ...
Setting up libroken18-heimdal:amd64 (7.7.0+dfsg-1ubuntu1.2) ...
Setting up libcups2:amd64 (2.3.1-9ubuntu1.2) ...
Setting up python-apt-common (2.0.0ubuntu0.20.04.8) ...
Setting up gpgconf (2.2.19-3ubuntu2.2) ...
Setting up libc6-i386 (2.31-0ubuntu9.9) ...
Setting up libperl5.30:amd64 (5.30.0-9ubuntu0.3) ...
Setting up git-man (1:2.25.1-1ubuntu3.6) ...
Setting up libharfbuzz0b:amd64 (2.6.4-1ubuntu4.2) ...
Setting up libtiff5:amd64 (4.1.0+git191117-2ubuntu0.20.04.7) ...
Setting up libwayland-egl1:amd64 (1.18.0-1ubuntu0.1) ...
Setting up libbinutils:amd64 (2.34-6ubuntu1.4) ...
Setting up vim-runtime (2:8.1.2269-1ubuntu5.9) ...
Setting up libc-dev-bin (2.31-0ubuntu9.9) ...
Setting up openssl (1.1.1f-1ubuntu2.16) ...
Setting up libxml2:amd64 (2.9.10+dfsg-5ubuntu0.20.04.5) ...
Setting up gpg (2.2.19-3ubuntu2.2) ...
Setting up libgstreamer1.0-0:amd64 (1.16.3-0ubuntu1.1) ...
Setcap worked! gst-ptp-helper is not suid!
Setting up libkmod2:amd64 (27-1ubuntu2.1) ...
Setting up libheimbase1-heimdal:amd64 (7.7.0+dfsg-1ubuntu1.2) ...
Setting up gnupg-utils (2.2.19-3ubuntu2.2) ...
Setting up libwayland-client0:amd64 (1.18.0-1ubuntu0.1) ...
Setting up libctf0:amd64 (2.34-6ubuntu1.4) ...
Setting up networkd-dispatcher (2.1-2~ubuntu20.04.3) ...
Setting up mysql-client-core-8.0 (8.0.31-0ubuntu0.20.04.2) ...
Setting up libmysqlclient21:amd64 (8.0.31-0ubuntu0.20.04.2) ...
Setting up libpython3.8-minimal:amd64 (3.8.10-0ubuntu1~20.04.6) ...
Setting up libgmp-dev:amd64 (2:6.2.0+dfsg-4ubuntu0.1) ...
Setting up gpg-agent (2.2.19-3ubuntu2.2) ...
Setting up libgs9:amd64 (9.50~dfsg-5ubuntu4.6) ...
Setting up bind9-libs:amd64 (1:9.16.1-0ubuntu2.11) ...
Setting up python3-apt (2.0.0ubuntu0.20.04.8) ...
Setting up openssh-client (1:8.2p1-4ubuntu0.5) ...
Setting up libasn1-8-heimdal:amd64 (7.7.0+dfsg-1ubuntu1.2) ...
Setting up gpgsm (2.2.19-3ubuntu2.2) ...
Setting up e2fsprogs (1.45.5-2ubuntu1.1) ...
Setting up ghostscript (9.50~dfsg-5ubuntu4.6) ...
Setting up libhcrypto4-heimdal:amd64 (7.7.0+dfsg-1ubuntu1.2) ...
Setting up ca-certificates (20211016ubuntu0.20.04.1) ...
debconf: unable to initialize frontend: Dialog
debconf: (No usable dialog-like program is installed, so the dialog based frontend cannot be used. at /usr/share/perl5/Debconf/FrontEnd/Diale 76.)
debconf: falling back to frontend: Readline
Updating certificates in /etc/ssl/certs...
rehash: warning: skipping ca-certificates.crt,it does not contain exactly one certificate or CRL
7 added, 11 removed; done.
Setting up unattended-upgrades (2.3ubuntu0.3) ...
Installing new version of config file /etc/kernel/postinst.d/unattended-upgrades ...
debconf: unable to initialize frontend: Dialog
debconf: (No usable dialog-like program is installed, so the dialog based frontend cannot be used. at /usr/share/perl5/Debconf/FrontEnd/Diale 76.)
debconf: falling back to frontend: Readline
Setting up perl (5.30.0-9ubuntu0.3) ...
Setting up libwind0-heimdal:amd64 (7.7.0+dfsg-1ubuntu1.2) ...
Setting up libgdk-pixbuf2.0-0:amd64 (2.40.0+dfsg-3ubuntu0.4) ...
Setting up libdpkg-perl (1.19.7ubuntu3.2) ...
Setting up gpg-wks-server (2.2.19-3ubuntu2.2) ...
Setting up python3.8-minimal (3.8.10-0ubuntu1~20.04.6) ...
Setting up libgdk-pixbuf2.0-bin (2.40.0+dfsg-3ubuntu0.4) ...
Setting up libwayland-cursor0:amd64 (1.18.0-1ubuntu0.1) ...
Setting up mysql-client-8.0 (8.0.31-0ubuntu0.20.04.2) ...
Setting up libc6-dev:amd64 (2.31-0ubuntu9.9) ...
Setting up libpython3.8-stdlib:amd64 (3.8.10-0ubuntu1~20.04.6) ...
Setting up python3.8 (3.8.10-0ubuntu1~20.04.6) ...
Setting up bind9-host (1:9.16.1-0ubuntu2.11) ...
Setting up binutils-x86-64-linux-gnu (2.34-6ubuntu1.4) ...
Setting up mysql-server-8.0 (8.0.31-0ubuntu0.20.04.2) ...
debconf: unable to initialize frontend: Dialog
debconf: (No usable dialog-like program is installed, so the dialog based frontend cannot be used. at /usr/share/perl5/Debconf/FrontEnd/Diale 76.)
debconf: falling back to frontend: Readline
invoke-rc.d: could not determine current runlevel
invoke-rc.d: policy-rc.d denied execution of stop.
Cannot stat file /proc/620/fd/0: Permission denied
Cannot stat file /proc/620/fd/1: Permission denied
Cannot stat file /proc/620/fd/2: Permission denied
Cannot stat file /proc/620/fd/3: Permission denied
Cannot stat file /proc/620/fd/4: Permission denied
Cannot stat file /proc/620/fd/5: Permission denied
Cannot stat file /proc/620/fd/6: Permission denied
Cannot stat file /proc/620/fd/7: Permission denied
Cannot stat file /proc/620/fd/8: Permission denied
Cannot stat file /proc/620/fd/9: Permission denied
Cannot stat file /proc/620/fd/10: Permission denied
Cannot stat file /proc/620/fd/11: Permission denied
Cannot stat file /proc/620/fd/12: Permission denied
Cannot stat file /proc/620/fd/13: Permission denied
Cannot stat file /proc/620/fd/14: Permission denied
Cannot stat file /proc/620/fd/15: Permission denied
Cannot stat file /proc/620/fd/16: Permission denied
Cannot stat file /proc/620/fd/17: Permission denied
Cannot stat file /proc/620/fd/18: Permission denied
Cannot stat file /proc/620/fd/19: Permission denied
Cannot stat file /proc/620/fd/20: Permission denied
Cannot stat file /proc/620/fd/21: Permission denied
Cannot stat file /proc/620/fd/22: Permission denied
Cannot stat file /proc/620/fd/23: Permission denied
Cannot stat file /proc/620/fd/24: Permission denied
Cannot stat file /proc/620/fd/25: Permission denied
Cannot stat file /proc/620/fd/26: Permission denied
mysqld will log errors to /var/log/mysql/error.log
mysqld is running as pid 7380
invoke-rc.d: could not determine current runlevel
invoke-rc.d: policy-rc.d denied execution of start.
Setting up openssh-sftp-server (1:8.2p1-4ubuntu0.5) ...
Setting up libc6-dev-i386 (2.31-0ubuntu9.9) ...
Setting up openssh-server (1:8.2p1-4ubuntu0.5) ...
debconf: unable to initialize frontend: Dialog
debconf: (No usable dialog-like program is installed, so the dialog based frontend cannot be used. at /usr/share/perl5/Debconf/FrontEnd/Diale 76.)
debconf: falling back to frontend: Readline
invoke-rc.d: could not determine current runlevel
invoke-rc.d: policy-rc.d denied execution of restart.
Setting up libhx509-5-heimdal:amd64 (7.7.0+dfsg-1ubuntu1.2) ...
Setting up binutils (2.34-6ubuntu1.4) ...
Setting up dpkg-dev (1.19.7ubuntu3.2) ...
Setting up libc6-dev-x32 (2.31-0ubuntu9.9) ...
Setting up libexpat1-dev:amd64 (2.2.9-1ubuntu0.6) ...
Setting up libsqlite3-dev:amd64 (3.31.1-4ubuntu0.5) ...
Setting up libpython3.8:amd64 (3.8.10-0ubuntu1~20.04.6) ...
Setting up zlib1g-dev:amd64 (1:1.2.11.dfsg-2ubuntu1.5) ...
Setting up bind9-dnsutils (1:9.16.1-0ubuntu2.11) ...
Setting up libmysqlclient-dev (8.0.31-0ubuntu0.20.04.2) ...
Setting up libkrb5-26-heimdal:amd64 (7.7.0+dfsg-1ubuntu1.2) ...
Setting up mysql-server (8.0.31-0ubuntu0.20.04.2) ...
Setting up vim (2:8.1.2269-1ubuntu5.9) ...
Setting up dnsutils (1:9.16.1-0ubuntu2.11) ...
Setting up libheimntlm0-heimdal:amd64 (7.7.0+dfsg-1ubuntu1.2) ...
Setting up libfreetype-dev:amd64 (2.10.1-2ubuntu0.2) ...
Setting up libgssapi3-heimdal:amd64 (7.7.0+dfsg-1ubuntu1.2) ...
Setting up libpython3.8-dev:amd64 (3.8.10-0ubuntu1~20.04.6) ...
Setting up python3.8-dev (3.8.10-0ubuntu1~20.04.6) ...
Setting up libldap-2.4-2:amd64 (2.4.49+dfsg-2ubuntu1.9) ...
Setting up libcurl3-gnutls:amd64 (7.68.0-1ubuntu2.14) ...
Setting up libfreetype6-dev:amd64 (2.10.1-2ubuntu0.2) ...
Setting up dirmngr (2.2.19-3ubuntu2.2) ...
Setting up git (1:2.25.1-1ubuntu3.6) ...
Setting up libcurl4:amd64 (7.68.0-1ubuntu2.14) ...
Setting up curl (7.68.0-1ubuntu2.14) ...
Setting up gpg-wks-client (2.2.19-3ubuntu2.2) ...
Setting up gnupg (2.2.19-3ubuntu2.2) ...
Setting up systemd (245.4-4ubuntu3.19) ...
Setting up systemd-timesyncd (245.4-4ubuntu3.19) ...
Setting up systemd-sysv (245.4-4ubuntu3.19) ...
Setting up libnss-systemd:amd64 (245.4-4ubuntu3.19) ...
Setting up libpam-systemd:amd64 (245.4-4ubuntu3.19) ...
debconf: unable to initialize frontend: Dialog
debconf: (No usable dialog-like program is installed, so the dialog based frontend cannot be used. at /usr/share/perl5/Debconf/FrontEnd/Diale 76.)
debconf: falling back to frontend: Readline
Setting up dbus-user-session (1.12.16-2ubuntu2.3) ...
Processing triggers for install-info (6.7.0.dfsg.2-5) ...
Processing triggers for mime-support (3.64ubuntu1) ...
Processing triggers for hicolor-icon-theme (0.17-2) ...
Processing triggers for libc-bin (2.31-0ubuntu9.9) ...
Processing triggers for man-db (2.9.1-1) ...
Processing triggers for ca-certificates (20211016ubuntu0.20.04.1) ...
Updating certificates in /etc/ssl/certs...
0 added, 0 removed; done.
Running hooks in /etc/ca-certificates/update.d...
done.
root@2dced288a905:~# sudo apt-get install git
Reading package lists... Done
Building dependency tree
Reading state information... Done
git is already the newest version (1:2.25.1-1ubuntu3.6).
0 upgraded, 0 newly installed, 0 to remove and 0 not upgraded.
root@2dced288a905:~# git clone https://github.com/SylviaJitti/zero_day.git
Cloning into 'zero_day'...
warning: You appear to have cloned an empty repository.
root@2dced288a905:~# ls
alx-higher_level_programming  empty_directory  old_school  ready_to_be_removed  SylviaJitti
alx-low_level_programming     not_here         printf      school               zero_day
root@2dced288a905:~# cd zero_day/
root@2dced288a905:~/zero_day# git init
Reinitialized existing Git repository in /root/zero_day/.git/
root@2dced288a905:~/zero_day# git add .
root@2dced288a905:~/zero_day# git commit -m "zero day"
On branch master

Initial commit

nothing to commit (create/copy files and use "git add" to track)
root@2dced288a905:~/zero_day# git push
error: src refspec refs/heads/master does not match any
error: failed to push some refs to 'https://github.com/SylviaJitti/zero_day.git'
root@2dced288a905:~/zero_day# echo "zero day" > README.md
root@2dced288a905:~/zero_day# ls
README.md
root@2dced288a905:~/zero_day# git add .
root@2dced288a905:~/zero_day# git commit -m "zero day"
[master (root-commit) f9d3255] zero day
 1 file changed, 1 insertion(+)
 create mode 100644 README.md
root@2dced288a905:~/zero_day# git push
Username for 'https://github.com': SylviaJitti
Password for 'https://SylviaJitti@github.com':
remote: Invalid username or password.
fatal: Authentication failed for 'https://github.com/SylviaJitti/zero_day.git/'
root@2dced288a905:~/zero_day# git push
Username for 'https://github.com': SylviaJitti
Password for 'https://SylviaJitti@github.com':
Enumerating objects: 3, done.
Counting objects: 100% (3/3), done.
Writing objects: 100% (3/3), 221 bytes | 221.00 KiB/s, done.
Total 3 (delta 0), reused 0 (delta 0)
To https://github.com/SylviaJitti/zero_day.git
 * [new branch]      master -> master
root@2dced288a905:~/zero_day# vi README.md
root@2dced288a905:~/zero_day# git add .
root@2dced288a905:~/zero_day# git commit -m "My first commit"
[master 9695b54] My first commit
 1 file changed, 1 insertion(+), 1 deletion(-)
root@2dced288a905:~/zero_day# git push
Username for 'https://github.com': SylviaJitti
Password for 'https://SylviaJitti@github.com':
Enumerating objects: 5, done.
Counting objects: 100% (5/5), done.
Writing objects: 100% (3/3), 262 bytes | 262.00 KiB/s, done.
Total 3 (delta 0), reused 0 (delta 0)
To https://github.com/SylviaJitti/zero_day.git
   f9d3255..9695b54  master -> master
root@2dced288a905:~/zero_day# mkdir 0x00-vagrant
root@2dced288a905:~/zero_day# cd 0x00-vagrant/
root@2dced288a905:~/zero_day/0x00-vagrant# echo "
> 0x00-vagrant" > README.md
root@2dced288a905:~/zero_day/0x00-vagrant# ls
README.md
root@2dced288a905:~/zero_day/0x00-vagrant# echo "Linux" > 0-hello_ubuntu
root@2dced288a905:~/zero_day/0x00-vagrant# ls
0-hello_ubuntu  README.md
root@2dced288a905:~/zero_day/0x00-vagrant# git add .
root@2dced288a905:~/zero_day/0x00-vagrant# git commit -m "hello ubuntu"
[master b159e6a] hello ubuntu
 2 files changed, 3 insertions(+)
 create mode 100644 0x00-vagrant/0-hello_ubuntu
 create mode 100644 0x00-vagrant/README.md
root@2dced288a905:~/zero_day/0x00-vagrant# git push
Username for 'https://github.com': SylviaJitti
Password for 'https://SylviaJitti@github.com':
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 2 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (5/5), 401 bytes | 401.00 KiB/s, done.
Total 5 (delta 0), reused 0 (delta 0)
To https://github.com/SylviaJitti/zero_day.git
   9695b54..b159e6a  master -> master
root@2dced288a905:~/zero_day/0x00-vagrant# cd ..
root@2dced288a905:~/zero_day# cd ..
root@2dced288a905:~# mkdir 0x02_vi
root@2dced288a905:~# cd 0x02_vi
root@2dced288a905:~/0x02_vi# echo "i" > inserting
root@2dced288a905:~/0x02_vi# echo "dd" > cutting
root@2dced288a905:~/0x02_vi# echo "p" > pasting
root@2dced288a905:~/0x02_vi# echo "u" > undoing
root@2dced288a905:~/0x02_vi# echo ":q!" > exiting
root@2dced288a905:~/0x02_vi# echo "^" >
bash: syntax error near unexpected token `newline'
root@2dced288a905:~/0x02_vi# echo "^" > beginning_of_the_line
root@2dced288a905:~/0x02_vi# echo "$" > end_of_the_line
root@2dced288a905:~/0x02_vi# client_loop: send disconnect: Connection reset by peer

BAANTA@DESKTOP-OPFS9RT MINGW64 ~
$ ssh 2dced288a905@2dced288a905.b827b7d4.alx-cod.online
2dced288a905@2dced288a905.b827b7d4.alx-cod.online's password:
root@2dced288a905:/# git clone https://github.com/SylviaJitti/monty.git
Cloning into 'monty'...
warning: You appear to have cloned an empty repository.
root@2dced288a905:/# cd monty
root@2dced288a905:/monty# ls
root@2dced288a905:/monty# cat > README.md
Monty Interpreter
Welcome to the Monty Bytecode Interpreter. This interpreter was built in the C language and is compliant with ISO90, ISO99, & ISO11. It reads Monty bytecode files of any extension (preferably .m although it doesn't matter), and interprets the opcodes contained.

Our interpreter can be run as either a stack (LIFO) or queue (FIFO). Mode can be switched mid-script. The interpreter can handle a variety of Monty opcodes, including printing, mathematical operations, and more - all handled opcodes are listed below.
^C
root@2dced288a905:/monty# vi README.md
root@2dced288a905:/monty# cat > div.c
#include "monty.h"
/**
 * f_div - divides the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_div(stack_t **head, unsigned int counter)
{
        stack_t *h;
        int len = 0, aux;

        h = *head;
        while (h)
        {
                h = h->next;
                len++;
        }
        if (len < 2)
        {
                fprintf(stderr, "L%d: can't div, stack too short\n", counter);
                fclose(bus.file);
                free(bus.content);
                free_stack(*head);
                exit(EXIT_FAILURE);
        }
        h = *head;
        if (h->n == 0)
        {
                fprintf(stderr, "L%d: division by zero\n", counter);
                fclose(bus.file);
                free(bus.content);
                free_stack(*head);
                exit(EXIT_FAILURE);
        }
        aux = h->next->n / h->n;
        h->next->n = aux;
        *head = h->next;
        free(h);
}
^C
root@2dced288a905:/monty# cat > mod.c
#include "monty.h"
/**
 * f_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_mod(stack_t **head, unsigned int counter)
{
        stack_t *h;
        int len = 0, aux;

        h = *head;
        while (h)
        {
                h = h->next;
                len++;
        }
        if (len < 2)
        {
                fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
                fclose(bus.file);
                free(bus.content);
                free_stack(*head);
                exit(EXIT_FAILURE);
        }
        h = *head;
        if (h->n == 0)
        {
                fprintf(stderr, "L%d: division by zero\n", counter);
                fclose(bus.file);
                free(bus.content);
                free_stack(*head);
                exit(EXIT_FAILURE);
        }
        aux = h->next->n % h->n;
        h->next->n = aux;
        *head = h->next;
        free(h);
}
^C
root@2dced288a905:/monty# cat > pall.c
#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
        stack_t *h;
        (void)counter;

        h = *head;
        if (h == NULL)
                return;
        while (h)
        {
                printf("%d\n", h->n);
                h = h->next;
        }
}
^C
root@2dced288a905:/monty# cat > monty.h
#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
        char *arg;
        FILE *file;
        char *content;
        int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void f_push(stack_t **head, unsigned int number);
void f_pall(stack_t **head, unsigned int number);
void f_pint(stack_t **head, unsigned int number);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stack(stack_t *head);
void f_pop(stack_t **head, unsigned int counter);
void f_swap(stack_t **head, unsigned int counter);
void f_add(stack_t **head, unsigned int counter);
void f_nop(stack_t **head, unsigned int counter);
void f_sub(stack_t **head, unsigned int counter);
void f_div(stack_t **head, unsigned int counter);
void f_mul(stack_t **head, unsigned int counter);
void f_mod(stack_t **head, unsigned int counter);
void f_pchar(stack_t **head, unsigned int counter);
void f_pstr(stack_t **head, unsigned int counter);
void f_rotl(stack_t **head, unsigned int counter);
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void f_queue(stack_t **head, unsigned int counter);
void f_stack(stack_t **head, unsigned int counter);
#endif

^C
root@2dced288a905:/monty# cat > pstr.c
#include "monty.h"
/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pstr(stack_t **head, unsigned int counter)
{
        stack_t *h;
        (void)counter;

        h = *head;
        while (h)
        {
                if (h->n > 127 || h->n <= 0)
                {
                        break;
                }
                printf("%c", h->n);
                h = h->next;
        }
        printf("\n");
}
^C
root@2dced288a905:/monty# cat > rotr.c
#include "monty.h"
/**
  *f_rotr- rotates the stack to the bottom
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
        stack_t *copy;

        copy = *head;
        if (*head == NULL || (*head)->next == NULL)
        {
                return;
        }
        while (copy->next)
        {
                copy = copy->next;
        }
        copy->next = *head;
        copy->prev->next = NULL;
        copy->prev = NULL;
        (*head)->prev = copy;
        (*head) = copy;
}
^C
root@2dced288a905:/monty# cat > add.c
#include "monty.h"
/**
 * f_add - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_add(stack_t **head, unsigned int counter)
{
        stack_t *h;
        int len = 0, aux;

        h = *head;
        while (h)
        {
                h = h->next;
                len++;
        }
        if (len < 2)
        {
                fprintf(stderr, "L%d: can't add, stack too short\n", counter);
                fclose(bus.file);
                free(bus.content);
                free_stack(*head);
                exit(EXIT_FAILURE);
        }
        h = *head;
        aux = h->n + h->next->n;
        h->next->n = aux;
        *head = h->next;
        free(h);
}
^C
root@2dced288a905:/monty# cat > execute.c

#include "monty.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @counter: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
        instruction_t opst[] = {
                                {"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
                                {"pop", f_pop},
                                {"swap", f_swap},
                                {"add", f_add},
                                {"nop", f_nop},
                                {"sub", f_sub},
                                {"div", f_div},
                                {"mul", f_mul},
                                {"mod", f_mod},
                                {"pchar", f_pchar},
                                {"pstr", f_pstr},
                                {"rotl", f_rotl},
                                {"rotr", f_rotr},
                                {"queue", f_queue},
                                {"stack", f_stack},
root@2dced288a905:/monty# cat > pchar.c
#include "monty.h"
/**
 * f_pchar - prints the char at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pchar(stack_t **head, unsigned int counter)
{
        stack_t *h;

        h = *head;
        if (!h)
        {
                fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
                fclose(bus.file);
                free(bus.content);
                free_stack(*head);
                exit(EXIT_FAILURE);
        }
        if (h->n > 127 || h->n < 0)
        {
                fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
                fclose(bus.file);
                free(bus.content);
                free_stack(*head);
                exit(EXIT_FAILURE);
        }
        printf("%c\n", h->n);
}
^C
root@2dced288a905:/monty# cat > push.c
#include "monty.h"
/**
 * f_push - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_push(stack_t **head, unsigned int counter)
{
        int n, j = 0, flag = 0;

        if (bus.arg)
        {
                if (bus.arg[0] == '-')
                        j++;
                for (; bus.arg[j] != '\0'; j++)
                {
                        if (bus.arg[j] > 57 || bus.arg[j] < 48)
                                flag = 1; }
                if (flag == 1)
                { fprintf(stderr, "L%d: usage: push integer\n", counter);
                        fclose(bus.file);
                        free(bus.content);
                        free_stack(*head);
                        exit(EXIT_FAILURE); }}
        else
        { fprintf(stderr, "L%d: usage: push integer\n", counter);
                fclose(bus.file);
                free(bus.content);
                free_stack(*head);
                exit(EXIT_FAILURE); }
        n = atoi(bus.arg);
        if (bus.lifi == 0)
                addnode(head, n);
        else
                addqueue(head, n);
}
^C
root@2dced288a905:/monty# cat > stack.c
#include "monty.h"
/**
 * f_stack - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_stack(stack_t **head, unsigned int counter)
{
        (void)head;
        (void)counter;
        bus.lifi = 0;
}
^C
root@2dced288a905:/monty# cat > addnode.c
#include "monty.h"
/**
 * addnode - add node to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: no return
*/
void addnode(stack_t **head, int n)
{

        stack_t *new_node, *aux;

        aux = *head;
        new_node = malloc(sizeof(stack_t));
        if (new_node == NULL)
        { printf("Error\n");
                exit(0); }
        if (aux)
                aux->prev = new_node;
        new_node->n = n;
        new_node->next = *head;
        new_node->prev = NULL;
        *head = new_node;
}
^C
root@2dced288a905:/monty# cat free_stack.c
cat: free_stack.c: No such file or directory
root@2dced288a905:/monty# cat > free_stack.c
#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @head: head of the stack
*/
void free_stack(stack_t *head)
{
        stack_t *aux;

        aux = head;
        while (head)
        {
                aux = head->next;
                free(head);
                head = aux;
        }
}
^C
root@2dced288a905:/monty# cat > mul.c
#include "monty.h"
/**
 * f_mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_mul(stack_t **head, unsigned int counter)
{
        stack_t *h;
        int len = 0, aux;

        h = *head;
        while (h)
        {
                h = h->next;
                len++;
        }
        if (len < 2)
        {
                fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
                fclose(bus.file);
                free(bus.content);
                free_stack(*head);
                exit(EXIT_FAILURE);
        }
        h = *head;
        aux = h->next->n * h->n;
        h->next->n = aux;
        *head = h->next;
        free(h);
}
^C
root@2dced288a905:/monty# cat > pint.c
#include "monty.h"
/**
 * f_pint - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pint(stack_t **head, unsigned int counter)
{
        if (*head == NULL)
        {
                fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
                fclose(bus.file);
                free(bus.content);
                free_stack(*head);
                exit(EXIT_FAILURE);
        }
        printf("%d\n", (*head)->n);
}
^C
root@2dced288a905:/monty# cat > queue.c
#include "monty.h"
/**
 * f_queue - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_queue(stack_t **head, unsigned int counter)
{
        (void)head;
        (void)counter;
        bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
*/
void addqueue(stack_t **head, int n)
{
        stack_t *new_node, *aux;

        aux = *head;
        new_node = malloc(sizeof(stack_t));
        if (new_node == NULL)
        {
                printf("Error\n");
        }
        new_node->n = n;
        new_node->next = NULL;
        if (aux)
        {
                while (aux->next)
                        aux = aux->next;
        }
        if (!aux)
        {
                *head = new_node;
                new_node->prev = NULL;
        }
        else
        {
                aux->next = new_node;
                new_node->prev = aux;
        }
}
^C
root@2dced288a905:/monty# cat > sub.c
#include "monty.h"
/**
  *f_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
        stack_t *aux;
        int sus, nodes;

        aux = *head;
        for (nodes = 0; aux != NULL; nodes++)
                aux = aux->next;
        if (nodes < 2)
        {
                fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
                fclose(bus.file);
                free(bus.content);
                free_stack(*head);
                exit(EXIT_FAILURE);
        }
        aux = *head;
        sus = aux->next->n - aux->n;
        aux->next->n = sus;
        *head = aux->next;
        free(aux);
}
^C
root@2dced288a905:/monty# ls
add.c      div.c      free_stack.c  monty.h  pall.c   pint.c  push.c   README.md  stack.c
addnode.c  execute.c  mod.c         mul.c    pchar.c  pstr.c  queue.c  rotr.c     sub.c
root@2dced288a905:/monty# cat > main.c
#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
        char *content;
        FILE *file;
        size_t size = 0;
        ssize_t read_line = 1;
        stack_t *stack = NULL;
        unsigned int counter = 0;

        if (argc != 2)
        {
                fprintf(stderr, "USAGE: monty file\n");
                exit(EXIT_FAILURE);
        }
        file = fopen(argv[1], "r");
        bus.file = file;
        if (!file)
        {
                fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
                exit(EXIT_FAILURE);
        }
        while (read_line > 0)
        {
                content = NULL;
                read_line = getline(&content, &size, file);
                bus.content = content;
                counter++;
                if (read_line > 0)
                {
                        execute(content, &stack, counter, file);
                }
                free(content);
        }
        free_stack(stack);
        fclose(file);
return (0);
}
^C
root@2dced288a905:/monty# cat > nop.c
#include "monty.h"
/**
  *f_nop- nothing
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_nop(stack_t **head, unsigned int counter)
{
	(void) counter;
	(void) head;
}
