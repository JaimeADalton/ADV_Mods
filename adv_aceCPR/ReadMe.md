adv_aceCPR: Giving you a second chance if your everyday CPR doesn't do squat.


With adv_aceCPR you can finally use ACE CPR to get someone out of the revive state without healing him completely, making gameplay much more interesting.
Of course ACE� and CBA are required.

After successfully "stabilizing" the patient, he/she will have a basic pulse of at least 30bpm.
ACE-doctors have a default 40% success rate and ACE-medics have a default 15% success rate. 
Regular riflemen can resuscitate a patient, but they will have a much lower success rate.
They can still keep the patient from dying due to an expired revive timer though.
The success rate is lowered if the patient looses blood or has morphine in his blood system and is raised if the patient received epinephrine right before CPR.
The minimum rate is always 2%, unless the player starts with a success probability of 0 (see below).

For mission builders:
You can set the probabilities for successful resuscitation individually depending on the value for ace_medical_medicClass a player's unit has,
or the time to be added to the revive timer or the duration during which CPR can still be applied successfully.
The easiest way to do this is via CBA Settings ( https://github.com/CBATeam/CBA_A3/wiki/CBA-Settings-System ). Alternatively you can use the following variables in your mission:

adv_aceCPR_probabilities = [40,15,5,85];	//the first entry is for ace_medical_medicClass == 2, the second for == 1, the third for regular units with ace_medical_medicClass == 0 and the fourth one for the defibrillator.

So if you want to disable CPR for any player with less than ace_medical_medicClass below 2 just use something like this:
adv_aceCPR_probabilities = [40,0,0,85];

The time to be added to the revive timer (+/-3 seconds) can additionally be set with this variable
(default is 20, maximum is 40, minimum is 15 - if set to anything below 18 there's a chance you spend more time on CPR than you gain):
adv_aceCPR_timeAdd = 30;

To set the duration during which CPR can still be applied successfully, you can set this variable (eg. if your ace_medical_maxReviveTime is 600 seconds and you want players to only be able to resuscitate patients
for 300 seconds, set it to 300. If the value is higher than ace_medical_maxReviveTime, it will revert to ace_medical_maxReviveTime). After this time you have to use AED or PAK to resuscitate a player (default is 1200):
adv_aceCPR_maxTime = 300;

With version 1.4.0 a new item is added to adv_aceCPR: A defibrillator.
The defibrillator works almost like the CPR action, but you have to have a defibrillator in your inventory and it's much faster and the success rate is way higher.
Using the defibrillator will induce pain for people who stand too close to a patient when the defibrillator is used (except for the operator).
The classname is
"adv_aceCPR_AED"
It's recommended to use adv_aceCPR_probabilities to lower the success rates for the CPR action when handing out the defibrillator.