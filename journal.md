---
title: "Ulit-Board"
author: "Kush Desai"
description: "The ultimate keyboard for all your daily needs."
created_at: "2025-05-31"
---

Hi this is my journal on making the Ultimate Keyboard. How did this all start? Well thats whats coming up.

Total Time Worked: 5 Hours

## May 31

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

But I ran into a huge problem I RAN OUT OF GPIO PINS ;(. so i decided that istead of every row getting its own color i would give every 2 rows its own color.

![Image of keys](/Images/Screenshot%202025-05-31%20190215.png)

![Image of leds](/Images/Screenshot%202025-05-31%20190229.png)

![Image of mcu and oled symbol](/Images/image2.png)

### Time Worked On This 5 Hours
**See You Tomorrow**