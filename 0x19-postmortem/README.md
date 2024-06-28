Issue Summary
On June27, 2024, between 9:00 AM to 11:30 AM GMT, Impact: Service outage affecting 35% of users, resulting in slow response times and frequent errors.
Root Cause: Database overload due to a surge in user activity combined with inefficient query optimization.

Timeline
9:00 AM - dealing with obscure error messages. 
9:15 AM - Initial investigation was done and it was said to have been the network 
9:45 AM - Network was restored and we encountered a shift in focus towards database-related issues, presenting a distinct set of challenges, e.g slowness 
10:00 AM - This issue was escalated to the database team. 
10:30 AM - The database team pinpointed a misconfiguration in the memory settings, presenting a distinct hurdle in the debugging process 
11:30 AM - Following the identification of the issue, resolution came through adjusting the configuration settings and performing
a database restart Root Cause and Resolution The hiccup stemmed from an erroneous memory allocation setting tucked away in the database configuration. 
It's probable that a recent update nudged the configuration back to its default settings, triggering the glitch.
To mend the issue, we had to right the wrong by adjusting the memory allocation setting to its correct parameters.
After this tweak, a simple restart of the database did the trick, setting everything back in order.
With these adjustments made, tranquility was restored to the database realm.
Collaboration and quick action were key in swiftly resolving the issue, ensuring smooth sailing for our systems once again.
Corrective and Preventative Measures Implement a configuration management system to maintain consistent settings across updates.
Improve our monitoring system to detect anomalies in the database performance.
Conduct regular audits of our system configurations.
Tasks Set up a configuration management system improve our monitoring for database performance plan a system configuration audit
