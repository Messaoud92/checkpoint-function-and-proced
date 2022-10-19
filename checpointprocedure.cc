
  PROCEDURE produit_scalair(var t1,var t2) : reel
              
     : integer                   
          ps : float                  
 
   for i in 0 to N-1 do
     ps := ps + t1[i]*t2[i];
    end

END
ALGORITHM orthogoneaux
VAR
     n,m,i:integer;
   myData : INTEGER := 20;
      var t1 : array [N] :float              
           t2 : array [N] :float    

BEGIN
    do 
	read(m);
	read(n);
    while(n>0 && m>0)
		 for i in 0 to N-1 do
   read(t1[i]);
   read(t2[i];
    end

   produit_scalair(var t1,var t2); 
END.

  fonction produit scalair(t1,t2) : reel
              
     : integer                  
          ps : float                   
   ps := 0.0;
   for i in 0 to N-1 do
     ps := ps + t1[i]*t2[i];
    end
    return  := ps;

END