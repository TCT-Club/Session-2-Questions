vector<int> primeNumbersTillN(int N) 
{   
	//Write your code here
    vector<bool> prime(N, true);
    vector<int> primes;
    
 	for(long long i=2; i<=N; i++) {
        if(prime[i]) {
           primes.emplace_back(i);
            for(long long j=i*i; j<=N; j+=i) prime[j]=0;
        }
    }
    return primes;
}