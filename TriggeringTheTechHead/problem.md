# Triggering the tech head

Kush and Ved are working together on a project consisting of n lines of code.

Kush starts working immediately and writes at a speed of x lines per hour until the very end.

Ved has two options:

- not use AI and write from the very beginning at a speed of y lines per hour;
- spend z hours first setting up an AI agent, writing nothing during that time, and then write at a speed of 10⋅y lines per hour.

Ved makes this choice before work begins and does not change it later.

While Ved is setting up the AI, he does not write any code at all, but Kush continues working at the speed of x lines per hour.

The project is considered completed as soon as Kush and Ved together have written at least n lines of code. If the project can be completed before the AI setup ends, then the work ends at that moment.

Time is measured using full hours: if a project is completed in the middle of an hour, this hour is counted fully.

Ved chooses whether to use AI or not.

Determine the minimum number of full hours after which the project will be completed.

## Input

Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤100). The description of the test cases follows.

The only line of each test case contains four integers n, x, y, and z (1≤n,x,y,z≤10000) — the number of lines in the project, Kush's speed, Ved's speed without AI, and the AI setup time, respectively.

## Output

For each test case, output one integer — the minimum number of full hours after which the project will be completed if Ved acts optimally.
