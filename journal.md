---
title: "Ulit-Board"
author: "Kush Desai"
description: "The ultimate keyboard for all your daily needs."
created_at: "2025-05-31"
---

Hi this is my journal on making the Ultimate Keyboard. How did this all start? Well thats whats coming up.

Total Time Worked: 5 Hours

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

