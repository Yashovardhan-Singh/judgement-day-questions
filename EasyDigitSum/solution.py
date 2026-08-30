import sys

D = 23
T = 23
MOD = 10 ** 9

def compute_up_to(max_n):
    dp = [[0] * (T + 1) for _ in range(D)]
    dp[0][0] = 1

    results = [0] * (max_n + 1)

    for step in range(1, max_n + 1):
        ndp = [[0] * (T + 1) for _ in range(D)]
        for r in range(D):
            row = dp[r]
            for s in range(T + 1):
                c = row[s]
                if c == 0:
                    continue
                for d in range(10):
                    ns = s + d
                    if ns > T:
                        continue
                    nr = (r * 10 + d) % D
                    ndp[nr][ns] = (ndp[nr][ns] + c) % MOD
        dp = ndp
        results[step] = dp[0][T]

    return results

def main():
    data = sys.stdin.read().split()
    idx = 0
    t = int(data[idx]); idx += 1
    ns = []
    for _ in range(t):
        ns.append(int(data[idx])); idx += 1

    max_n = max(ns) if ns else 0
    results = compute_up_to(max_n)

    out = [str(results[n]) for n in ns]
    print("\n".join(out))

if __name__ == "__main__":
    main()
