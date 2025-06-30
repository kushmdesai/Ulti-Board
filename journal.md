---
title: "Ulti-Board"
author: "Kush Desai"
description: "The ultimate keyboard for all your daily needs."
created_at: "2025-05-31"
---

Hi this is my journal on making the Ultimate Keyboard. How did this all start? Well thats whats coming up.

### Total Time Worked: 32 Hours

## May 31

**Time Worked 5 Hours**

This morning I woke up and knew that I would have to lock in and work hard because I hadn't really done anything for the past week except research some key things about making a keyboard and waiting for my gamepad to be accepted (I would appreaciate it if you could check if thats possible(That is if you can)). So today I decided that instead of resarching more about keys and leds to use I would just use the ones that were In the gamepad.

I started by making the schematic, I knew that I wanted the layout to look something like my current keyboard but I did want to customize it a little bit.
![My keyboard](/journal/Images/IMG_0525.jpg)

**To**

![Planned Layout](/journal/Images/Screenshot%202025-05-31%20181554.png)

Next to make the schematic I knew that I would need a lot of GPIO pins so I decided to use the Raspberry Pi Pico
![Raspberry_Pi_Pico](/journal/Images/image.png)
since i already had the symbol for the sw_push and sk6812mini e led(i think thats what its called) I decided to make the grid for the switches and the leds.

After I did this I wired all of them up. I wired the keys in an Matrix format and the leds in rows. I originally wanted each led to have a different color but quickly decided that that was kind of advanced and I would probably need a lot of GPIO pins. So then I decided to keep it so that each row would have its own din from the pi pico.

Next I looked up and found the pi pico board symbol and footprint. I downloaded these and imported them to kicad and added it to the schmatic.

When it came to wiring the pico with the keys and leds I decided to use tags so that the schematic was more readable to anyone who wanted to read it.

Next I wanted to add a oled to the keyboard I needed a symbol and footprint for this but I was unable to fine one. I looked around and tried different things for a while(it was a long while) and came up empty. But shout out to [This post](https://hackclub.slack.com/archives/C07LESGH0B0/p1738472440305419) because it solved my problem and I am sure it also solved others problem as well.

But I ran into a huge problem I RAN OUT OF GPIO PINS ;(. So i decided that instead of every row getting its own color i would give every 2 rows its own color.

![Image of keys](/journal/Images/Screenshot%202025-05-31%20190215.png)

![Image of leds](/journal/Images/Screenshot%202025-05-31%20190229.png)

![Image of mcu and oled symbol](/journal/Images/image2.png)

### Time Worked On This 5 Hours

**See You Tomorrow**

## June 1

I really didn't do to much over the weekend exepct check up to see if my first subbmision got accepted or not, and it wasn't :(

## June 2 - 4

**Time Worked 10 Hours**

This is when i started to do the designing for the pcb. The first thing i did was make sure all of the right footprints were assigned and then imported it all into the pcb. I decided the it was a good idea to put all of the keys in first into a grid and then add the diodes and the leds after. I put the leds in a grid where the white lines on the outside lined up and started putting the diodes and leds in the right area as well. This is where I ran into a big problem that I didn't really realize at the time. I did not have enough space to put everything but I would realize that later. So I decided that each diode would go to the right and each led would go beneath its respective switch.

Once I was done putting it all in the right spot I started to do the wiring. I just followed the blue lines to an extent and add vias when another wire got in the way. I thought that I had done a great job at the time and wanted to see how it would look in 3d view. I was disappointed when I open the 3d view and just saw the pcb and diodes without the leds or switches and was determined to add them in.

I opened the fooprint editor to find that the path at which it looked for the footprint was wrong in each key and led. I also realized that I had much to mant footprints to go in and change each one individually so I came up with another plan. I decided that I would open the file in VScode(which is where i am writing this rn) and make changes to the model prams. this would make it much easier because of the fact that I can use the shortcut CTRL + F to find and change all of them at the same time. I still took quite the entire day to get the model in the right spot but this is when I came to an very important realization. The model for the switch and the leds were slightly overlapping. I didn't want to take any chances with this and decided that I would take a break to find out some other choices that I have.

![Image of wiring](/journal/Images/Image%20of%20orignal%20wiring.png)

![Image of 3d view](/journal/Images/Image%20of%20original%20pcb%20without%20models.png)

![Image of 3d view with models](/journal/Images/Image%20of%20original%20pcb%20with%20models.png)

![Image of overlapp](/journal/Images/primary%20original%20image%20of%20overlap.png)

![secondary image of overlap](/journal/Images/secondary%20original%20image%20of%20overlap.png)

**Thats all for these three days see you next time.**

## June 6
**Time Spent: 5 Hours**

hii so i decided that I am gonna start everthing again from scratch. Yup I am just gonna delete everything. Why? well I found a very usefull library of footprints and symbols on [Github](https://github.com/ebastler/marbastlib), and I feel like the quality of my keyboard will be much better if I am to use that instead. I feel like this library will be so useful so thanks so much to ebastler for posting this

So I replaced the symbol for the key with the new one and changed the leds as well. This didn't take to long prob like an hour but I feel like it was a very big foot in the right step. Next up I had to line it up in the pcb this took a little longer because I knew that if anythin happened to be in the wrong spot after I started wiring I would casue major problems so I took it slow. I first put all the keys into the right place as well as pico and the oled display next it was time for the leds.

This probably took the longest time becasue I knew that if the led did not fit in the cavity given in the rbg variant of the cherry mx I would use then it would be a big disaster. This is why I tried to line up the outer line to the best of my ability as well as prob the main reason it took so long. Why? because my grid setting was on the custom one made on the hackpad guide website and for some reason the box would always be slightly of so I used a smaller grid and moved all of them to the right place slowly but surely.

After this it was time for the diodes I placed a couple and then I tried to get all of the footprints to show so that I can tell if there is some sort of overlap or something like that. It didn't look like there were any 3d models in this library so I decided to use the same ones that I was using earlier. I know had to go into each key's footprint and change the path of the 3d model to accomadate this. At this realization I decided to finish up for today and do some more work tomorrow.

Done!
![The Schmatic so far keys](/journal/Images/New_schmatic_for_keys.png)

Done!
![The Schmatic so far leds](/journal/Images/New_Schmatic_for_leds.png)

Done!
![The Schmatic so far stil same](/journal/Images/This_is_prob_still_the_same.png)

Done!
![The pcb design so far finished](/journal/Images/newPcb_finished.png)

I am not done puttting these pieace in the right spots
![The pcb design so far Not finished](/journal/Images/newPCB_notfinished.png)

Still adding more 3d models
![The pcb in 3d model so far](/journal/Images/Newpcbwhatdone.png)

**Thats all for today see you tomorrow**

## June 7

**Time Spent: 8 hours**

helllo so today I will put everything in the right spot wire it up and also get the 3d models in the right spot as well.

So first lets get all of the models in. The diodes all were in the right place in the models I just had to move them in the pcb design. The leds were all in the right place as well. So first up I added the 3d model for the switches.

To do this I copyed the path at which I had .wrl file and then open each switch in the footprint editor individually to do this. There was prob a way to do this quicker but I just locked in and did it all. next i put the footprint for the stabs around the keys that needed it. And then lastly I the .wrl file for the oled display. I also added keycaps for all the keys except the space bar becaus i coudn't find a 6u .step file.

Next I will wire everything up. First up the leds, I just made a staight lines in each row for the power and gnd and then connected thw two ends on either side to the row above and lastly the top row with the pico. Then I wired the din dout according to my schematic with the three sections that i made (wasd and arrow keys, all alphanumerical keys, and modifier keys). Next I wired the swichtes up, the keys were wired in a vertical line and the diodes in the horizantal lined and lastly each key wired to its designated diode.

![v1 3d model view](/journal/Images/v1_3d_model_view.png)


![v1 wired pcb](/journal/Images/v1_wired_pcb.png)

After I finished this I felt very energized and decided to tackle the code part next. I started by installing qmk on my wsl and then making a new keyboard. Next I edited the keymap.c to the following

[keymap.c keymap](https://github.com/kushmdesai/Ulti-Board/blob/main/journal/qmk%20code%20for%20journal/keymap_JUNE6.c)

and also added the following macros.

[keymap.c macros](https://github.com/kushmdesai/Ulti-Board/blob/main/journal/qmk%20code%20for%20journal/keymap_JUNE6.c)

This probably took me the longest because I haven't ever coded in c before but also because of the fact that in qmk you don't really code (except of macros) you just tell it which key is where and what it does. This reminds me that I also had to edit the keyboard.json to the following

[keyboard.json](https://github.com/kushmdesai/Ulti-Board/blob/main/journal/qmk%20code%20for%20journal/keyboard_JUNE6.json)

**Thats all for today see you tommorrow**

## June 22 

**Time Spent: 5 Hours**

I took a very long brake in between because I was working on another project called [Mini-Safe](https://www.github.com/kushmdesai/Mini-Safe) but eventually decided to come back and quickly finish this project. So I realized that qmk only supports one rgb strip and I have three so I decided to redo the wiring for the pcb again. 

After that I had another major realization. I choose to have a very strange set for the sizes of each key which are generally not supported. This is why I had to change my layout to a supported sizes such as a 6.25 u space bar instead of a 6u one.

![new plan](/journal/Images/Screenshot%202025-06-22%20135133_edited.png)

I had to change up the keyboard schematic a bit so that it matched the new plan for the keys diodes and the leds. Next I had to put all of the footprints in the right place which is really not a big task but I wanted to make sure that I put all the leds right with precision and accuracy. This was a problem becasuse while placing the keys I used the grid that we were instructed to use in the hackpad buide but for some reason they wouldn't go right on top of each other no matter what I did so I had to just use a smalled grid.

After I finished putting all the compnenets in the right place it was very late and I was tired so I went to sleep.

![new plan for rgbs](/journal/Images/New_plan_rgbschmeatic.png)

![new plan for keys](/journal/Images/new_plan_keyschematic.png)

**See You tommorrow**

## June 23

**Time spent: 3 Hours**

Today I worked on wiring the pcb. I started of by wiring the keys together in columns and then connecting each key to their respective doides. Next I connected each diode to with the othere diodes in their respective row.

Although I did have to make a change after wiring probably around half of the keys vertically. This did cause me some annoyance but the problem was a quick fix so I quickly moved on. The problem that had occured was the I had chosen the 1.75U footprint for the left shift keys instead of 2.25 Which was a pretty easy fix I just had to change the footprint and the wiring around it a little bit.

After I finished that came that hardest part of wiring, the leds. Even though all you have to do is chain them the fact that they are smd and that there are sooo many of them just makes it a big hassle to do. But eventually I finished it again and hopefully I will not have to do this entire thing again. 

![v2 pcb](/journal/Images/v2_pcb.png)

![v2 pcb in 3d viewer front](/journal/Images/v2_pcb_in_3dview_front.png)

![v2 pcb in 3d viewer back](/journal/Images/v2_pcb_in_2dview_back.png)

**See You tommorrow

## June 29

**Time Spent: 10 Hours**

Today I am gonna work on the firmware for the project. I am gonna use qmk to do this and I did start this a little bit before but becuase I changed the layout of my keyboard I had to also change my code from scratch(Yaay!). So I first started of by reading the [the qmk docs](https://qmk.fm/guide). After that I had a somewhat good idea of how to start of so I made a simple keymap and keyboard.json file for my keyboard.

After that came probably the most difficult part. Adding the Oled. This is because there were so many cool features I wanted to add such as  pictures and animations and so much more. So I decided to add a startup animation that would show  the qmk logo and some hackclub branding. I originally wanted to show some highway branding but was unable to find a black and white versions so I settled with [Orpheas Flag](https://hackclub.com/branding).

I also added a cool easter egg animation for "hacking the host computer". Another thing that I wanted to add but was unable to was a matrix rain screensaver that would activate while the computer was in screensaver mode.

Lastly I used the screen to be able to tell my current WPM(which is usually in the 50s), which layer I am on, and wheather my caps lock is on or not.

I also added another layer to my keyboard as it would be the one that contains all of the "MODS". This is where you can contol rgb animations, hue, sat, val(speed of animation), Volume, Skip forward and backward tracks, and go to boot mode. Something that I though was soo cool was [Velocikey](https://docs.qmk.fm/features/rgblight#velocikey).

Velocikey allows you to change the speed of your rgb animations with the speed of your typing. That is so cool. I was absoulutly blown away by this and imediatly added this to my keyboard. I stil had to add the rgb lighting though. This was surprisingly easy companred to all the stuff I had todo on KMK with my last project. All I had to do was add the neccesary commands on rules.mk and config.h then add all of the rgb animations as keycodes.

Now its time to show you the code [My amazing keyboard](/Code/highwayhc_ultiboard/)

It took me a really long time to do so I hope you like it. :)

Also I found this vid very helpful while coding the oled [Amazing Very Helpful Video About Oleds on QMK](https://www.youtube.com/watch?v=OJSOEStpPIo)

**bye**