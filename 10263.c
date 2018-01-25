#include<stdio.h>
#include<math.h>

int main()
{
    double sx,sy,mn,dis,dis1,dis2,p,q,a,b,c,d,b1,b2,det,x,x1,x2,y,y1,y2;
    int i,n;
    freopen("in.txt","r",stdin);
    while(scanf("%lf%lf",&p,&q) == 2)
    {
        scanf("%d",&n);
        scanf("%lf%lf",&x1,&y1);
        mn=999999999999;
        for(i=1; i<=n; i++)
        {
            scanf("%lf%lf",&x2,&y2);
            a = y1-y2;
            b = x2-x1;
            c = b;
            d = y2-y1;
            //printf("a = %lf  b = %lf  c = %lf  d = %lf\n",a,b,c,d);
            b1 = x2*y1-x1*y2;
            b2 = p*(x2-x1)-q*(y1-y2);
            // printf("b1 = %lf  b2 = %lf\n",b1,b2);
            det = (a*d-b*c);
            // printf("det = %lf\n",det);
            x = (d*b1-b*b2)/det;
            y = (a*b2-c*b1)/det;

//printf("x = %lf  y = %lf\n",x,y);

            if(((x<x1&&x<x2)||(x>x1&&x>x2))||((y<y1&&y<y2)||(y>y1&&y>y2)))
            {
                dis1 = sqrt((p-x1)*(p-x1)+(q-y1)*(q-y1));
                dis2 = sqrt((p-x2)*(p-x2)+(q-y2)*(q-y2));

                if(dis1<dis2)
                {
                    dis = dis1;
                    x = x1;
                    y = y1;
                }
                else
                {
                    dis = dis2;
                    x = x2;
                    y = y2;
                }
            }
            else dis = sqrt((p-x)*(p-x)+(q-y)*(q-y));
//printf("dis = %lf\n",dis);
            if(mn>dis)
            {
                mn = dis;
                sx = x;
                sy = y;
            }

            x1 = x2;
            y1 = y2;
        }

        printf("%.4lf\n%.4lf\n",sx,sy);
    }
    return 0;
}
