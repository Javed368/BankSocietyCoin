-------------------------------------------------------------------
Society Wallet Buddy 1.1 - Windows - (C) 2018 Profit Hunters Coin
-------------------------------------------------------------------
BACKUP wallet.dat file to an external drive before you continue!
Notice: USE THIS TOOL AT YOUR OWN RISK!


Here are some things you can do with Society Wallet Buddy:

- Clean your AppData\Society folder (renaming: database, txleveldb, blk0001.dat, db.log, debug.log)
- Restore your AppData\Society folder after cleaning (with this tool only)
- Download/install the most recent version of society-qt.exe
- Download/install the most recent version of the blockchain bootstrap
- Run wallet in "normal" or "repair wallet" mode


Installing Society Wallet Buddy 1.1:

Step 1 - Unzip the most recent archive from http://github.com/profithunterscoin/walletbuddy-win/releases
Step 2 - this file, curl.exe and society-walletbuddy.bat into the same directory (folder) as society-qt.exe
If curl.exe is not included in this package:
Step 3 - Download https://curl.haxx.se/download/curl-7.58.0.zip
Step 4 - Unzip curl-7.58.0.zip and copy curl.exe into the same directory (folder) as society-qt.exe


Download and install the most recent version of society-qt.exe

Step 1 - Install society-walletbuddy (if not done already)
Step 2 - Close society-qt.exe, then backup your wallet.dat
Step 3 - Load society-walletbuddy.bat
Step 4 - Install Curl to system32? n {ENTER}
Step 5 - Did you backup your wallet data? y {ENTER}
Step 5 - Clean Society AppData? n {ENTER}
Step 6 - Download society-qt.exe update? y {ENTER}
Step 7 - Download bootstrap? n {ENTER}
Step 8 - Load wallet? y {ENTER}


Wallet chain-forked (stuck on blocks?)

Step 1 - Backup your wallet! File -> Backup Wallet (selecting an external usb drive is recommended)
Step 2 - Make sure curl.exe and society-walletbuddy.bat is located in the same directory (folder) as society-qt.exe
Step 3 - Double click (run) society-walletbuddy.bat
Step 4 - You will be asked to install curl.exe to system32 type: n {ENTER}
step 5 - You will be asked if you backed up your wallet, if you did type: y {ENTER}
Step 6 - You will be asked to Clean Society AppData tpe: y {ENTER}
Step 7 - You will be asked to Download society-qt update, if you have not already type: y {ENTER}
Step 8 - You will be asked to Download recent bootstrap file. Type: y {ENTER}
Step 9 - You will be asked to Load Wallet. Type: y {ENTER}
Step 10 - Wait for your wallet to finish "importing blocks" and to connect to peers and fully sync.


Curl not working?

Step 1 - Right click on society-walletbuddy.bat and click "Run as administrator"
Step 2 - It will ask you to install curl.exe to system32. Type: y {ENTER}
Step 3 - Run Society Wallet Buddy again.
