
void doctor()
{
	struct docter
    {
		char doctername[20];
		char department[20];
		int time1,time2;
    };
	struct docter doc={"DR.kumar","cardiolaist",9,11};
	struct docter doc1={"DR.srikanth","general medicine", 11,2};
	struct docter doc2={"DR.venkatesh","dentist",2,5};
	struct docter doc3={"DR.Bhargavi","pharmasy",3,6};
	struct docter doc4={" DR.meena","neuroloist",9,11};
	printf("--DOCTERS--      \t--DEPARTMENT--  \t--AVAILABILITY TIME--");
	printf("\n  %s         \t %s        \t %dAm to %dAm",doc.doctername ,doc.department,doc.time1,doc.time2);
	printf("\n  %s     \t %s     \t %dAm to %dpm",doc1.doctername ,doc1.department,doc1.time1,doc1.time2);
	printf("\n  %s   \t %s           \t %dpm to %dpm",doc2.doctername ,doc2.department,doc2.time1,doc2.time2);
	printf("\n  %s     \t %s           \t %dpm to %dpm",doc3.doctername ,doc3.department,doc3.time1,doc3.time2);
	printf("\n %s      \t %s        \t %dpm to %dpm",doc4.doctername ,doc4.department,doc4.time1,doc4.time2);	
}
