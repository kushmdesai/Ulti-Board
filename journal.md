---
title: "Ulit-Board"
author: "Kush Desai"
description: "The ultimate keyboard for all your daily needs."
created_at: "2025-05-31"
---

Hi this is my journal on making the Ultimate Keyboard. How did this all start? Well thats whats coming up.

### Total Time Worked: 20 Hours

## May 31

**Time Worked 5 Hours**

This morning I woke up and knew that I would have to lock in and work hard because I hadn't really done anything for the past week except research some key things about making a keyboard and waiting for my gamepad to be accepted (I would appreaciate it if you could check if thats possible(That is if you can)). So today I decided that instead of resarching more about keys and leds to use I would just use the ones that were In the gamepad.

I started by making the schematic, I knew that I wanted the layout to look something like my current keyboard but I did want to customize it a little bit.
![My keyboard](/Images/IMG_0525.jpg)

**To**

![Planned Layout](/Images/Screenshot%202025-05-31%20181554.png)

Next to make the schematic I knew that I would need a lot of GPIO pins so I decided to use the Raspberry Pi Pico
![Raspberry_Pi_Pico](/Images/image.png)
since i already had the symbol for the sw_push and sk6812mini e led(i think thats what its called) I decided to make the grid for the switches and the leds.

After I did this I wired all of them up. I wired the keys in an Matrix format and the leds in rows. I originally wanted each led to have a different color but quickly decided that that was kind of advanced and I would probably need a lot of GPIO pins. So then I decided to keep it so that each row would have its own din from the pi pico.

Next I looked up and found the pi pico board symbol and footprint. I downloaded these and imported them to kicad and added it to the schmatic.

When it came to wiring the pico with the keys and leds I decided to use tags so that the schematic was more readable to anyone who wanted to read it.

Next I wanted to add a oled to the keyboard I needed a symbol and footprint for this but I was unable to fine one. I looked around and tried different things for a while(it was a long while) and came up empty. But shout out to [This post](https://hackclub.slack.com/archives/C07LESGH0B0/p1738472440305419) because it solved my problem and I am sure it also solved others problem as well.

But I ran into a huge problem I RAN OUT OF GPIO PINS ;(. So i decided that instead of every row getting its own color i would give every 2 rows its own color.

![Image of keys](/Images/Screenshot%202025-05-31%20190215.png)

![Image of leds](/Images/Screenshot%202025-05-31%20190229.png)

![Image of mcu and oled symbol](/Images/image2.png)

### Time Worked On This 5 Hours

**See You Tomorrow**

## June 1

I really didn't do to much over the weekend exepct check up to see if my first subbmision got accepted or not, and it wasn't :(

## June 2 - 4

**Time Worked 10 Hours**

This is when i started to do the designing for the pcb. The first thing i did was make sure all of the right footprints were assigned and then imported it all into the pcb. I decided the it was a good idea to put all of the keys in first into a grid and then add the diodes and the leds after. I put the leds in a grid where the white lines on the outside lined up and started putting the diodes and leds in the right area as well. This is where I ran into a big problem that I didn't really realize at the time. I did not have enough space to put everything but I would realize that later. So I decided that each diode would go to the right and each led would go beneath its respective switch.

Once I was done putting it all in the right spot I started to do the wiring. I just followed the blue lines to an extent and add vias when another wire got in the way. I thought that I had done a great job at the time and wanted to see how it would look in 3d view. I was disappointed when I open the 3d view and just saw the pcb and diodes without the leds or switches and was determined to add them in.

I opened the fooprint editor to find that the path at which it looked for the footprint was wrong in each key and led. I also realized that I had much to mant footprints to go in and change each one individually so I came up with another plan. I decided that I would open the file in VScode(which is where i am writing this rn) and make changes to the model prams. this would make it much easier because of the fact that I can use the shortcut CTRL + F to find and change all of them at the same time. I still took quite the entire day to get the model in the right spot but this is when I came to an very important realization. The model for the switch and the leds were slightly overlapping. I didn't want to take any chances with this and decided that I would take a break to find out some other choices that I have.

![Image of wiring](/Images/Image%20of%20orignal%20wiring.png)

![Image of 3d view](/Images/Image%20of%20original%20pcb%20without%20models.png)

![Image of 3d view with models](/Images/Image%20of%20original%20pcb%20with%20models.png)

![Image of overlapp](/Images/primary%20original%20image%20of%20overlap.png)

![secondary image of overlap](/Images/secondary%20original%20image%20of%20overlap.png)

**Thats all for these three days see you next time.**

## June 6
**Time Spent: 5 Hours**

hii so i decided that I am gonna start everthing again from scratch. Yup I am just gonna delete everything. Why? well I found a very usefull library of footprints and symbols on [Github](https://github.com/ebastler/marbastlib), and I feel like the quality of my keyboard will be much better if I am to use that instead. I feel like this library will be so useful so thanks so much to ebastler for posting this

So I replaced the symbol for the key with the new one and changed the leds as well. This didn't take to long prob like an hour but I feel like it was a very big foot in the right step. Next up I had to line it up in the pcb this took a little longer because I knew that if anythin happened to be in the wrong spot after I started wiring I would casue major problems so I took it slow. I first put all the keys into the right place as well as pico and the oled display next it was time for the leds.

This probably took the longest time becasue I knew that if the led did not fit in the cavity given in the rbg variant of the cherry mx I would use then it would be a big disaster. This is why I tried to line up the outer line to the best of my ability as well as prob the main reason it took so long. Why? because my grid setting was on the custom one made on the hackpad guide website and for some reason the box would always be slightly of so I used a smaller grid and moved all of them to the right place slowly but surely.

After this it was time for the diodes I placed a couple and then I tried to get all of the footprints to show so that I can tell if there is some sort of overlap or something like that. It didn't look like there were any 3d models in this library so I decided to use the same ones that I was using earlier. I know had to go into each key's footprint and change the path of the 3d model to accomadate this. At this realization I decided to finish up for today and do some more work tomorrow.

Done!
![The Schmatic so far keys](/Images/New_schmatic_for_keys.png)

Done!
![The Schmatic so far leds](/Images/New_Schmatic_for_leds.png)

Done!
![The Schmatic so far stil same](/Images/This_is_prob_still_the_same.png)

Done!
![The pcb design so far finished](/Images/newPcb_finished.png)

I am not done puttting these pieaces in the right spots
![The pcb design so far Not finished](/Images/newPCB_notfinished.png)

Still adding more 3d models
![The pcb in 3d model so far](/Images/Newpcbwhatdone.png)

**Thats all for today see you tomorrow**