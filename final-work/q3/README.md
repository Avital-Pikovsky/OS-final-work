### הרצת הקוד:
:על מנת להריץ את הקוד יש צורך להריץ פעולות בסדר הבא

- :נפתח שני טרמינלים

-  `make`:לפתוח את הטרמינל ולהריץ את המייקפייל עם הפקודה

- :לאחר פקודה זו יווצר קובץ הרצה

set_policy

- :נכתוב את הפקודה הבאה כדי להריץ את התוכנית

 ` sudo ./set_policy "new number of policy" "new number of priority"`
 
המספר של המדיניות שנרצה לשנות אליה - **new number of policy**

המספר של העדיפות שנרצה לשנות אליה - **new number of priority**

:רשימה של הספרה המתאימה למדיניות ואיזו אופציה יש לעדיפות

> policy: sched_other 0, priority: 0

> policy: sched_fifo 1, priority: 1-99

> policy: sched_rr 2, priority: 1-99

> policy: sched_batch 3, priority: 0

> policy: sched_idle 5, priority: 0



 .שאותו נשנה pid -ונראה שמופיע לנו בטרמינל ה
 
- :נפתח את הטרמינל השני ונכתוב את הפקודה הבאה

 `chrt -p "pid" `
 
אותו אחד שקיבלנו בטרמינל הראשון-pid.

- :לדוגמא

 `chrt -p 2345 `
 
 ,ונראה שתי שורות באותו הטרמינל שאומרות ששינינו את המדיניות ואת העדיפות
 ולמה שינינו.
 
