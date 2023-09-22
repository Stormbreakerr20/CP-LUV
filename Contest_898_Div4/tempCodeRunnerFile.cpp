while(s<=e){
            ll mid = s + (e-s)/2;
            ll current_w = f(v,mid);
            if(current_w <= maxw) {
                s = mid + 1; 
                ans = mid;
            }
            else if(current_w > maxw) e = mid -1;
        }