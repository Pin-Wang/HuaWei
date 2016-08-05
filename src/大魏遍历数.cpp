//#include <stdio.h>
//#include <string.h>
//#define N 301
//int n,he ad[N],li[N],ri[N];
//int e,nx[N-1],to[N-1];
//int vti[N],mk[N],ln;
//int err,f1;
//int Tsort(int rt)
//{
//    int l=N,r=-1,ct=0,eg,peg,sn,es,pes;
//    if(head[rt]==0){
//        l=r=vti[rt];
//        ct=1;
//    }
//    else{
//        for(peg=0,eg=head[rt];eg;peg=eg,eg=nx[eg]){
//            sn=to[eg];
//            ct+=Tsort(sn);
//            if(err) return 0;
//
//            for(pes=0,es=head[rt];li[to[es]]<li[sn];pes=es,es=nx[es]) ;
//            if(es!=eg){
//                nx[peg]=nx[eg];
//                nx[eg]=es;
//                if(pes!=0) nx[pes]=eg;
//                else head[rt]=eg;
//                eg=peg;
//            }
//
//            if(li[sn]<l) l=li[sn];
//            if(ri[sn]>r) r=ri[sn];
//        }
//    }
//    if(r-l+1==ct){
//        li[rt]=l;
//        ri[rt]=r;
//        return ct;
//    }
//    else{
//        err=1;
//        return 0;
//    }
//}
//void printPT(int rt)
//{
//    int eg;
//    if(f1) printf("%d",rt),f1=0;
//    else printf(" %d",rt);
//    if(head[rt]!=0){
//        for(eg=head[rt];eg;eg=nx[eg]){
//            printPT(to[eg]);
//            printf(" %d",rt);
//        }
//    }
//}
//
//int main()
//{
//    int i,rt,sn,v;
//    while(scanf("%d",&n)!=EOF){
//        err=0; e=1; ln=n; f1=1;
//        memset(head,0,sizeof(head));
//        memset(mk,0,sizeof(mk));
//        mk[1]=1;
//        for(i=0;i<n-1;i++){
//            scanf("%d%d",&rt,&sn);
//            if(mk[sn]){v=sn;sn=rt;rt=v;}
//            to[e]=sn; nx[e]=head[rt]; head[rt]=e++;
//            if(mk[rt]==1) mk[rt]=2,ln--;
//            mk[sn]=1;
//        }
//        for(i=1;i<=ln;i++){
//            scanf("%d",&v);
//            vti[v]=i;
//        }
//        Tsort(1);
//        if(err) printf("-1");
//        else printPT(1);
//        printf("\n");
//    }
//    return 0;
//}
//
///**************************************************************
//    Problem: 1359
//    User: lovai
//    Language: C
//    Result: Accepted
//    Time:40 ms
//    Memory:916 kb
//****************************************************************/
