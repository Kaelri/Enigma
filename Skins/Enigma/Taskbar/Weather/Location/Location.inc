;---------------------------------------------------------------------
; METERS

[Background]
Meter=Image
MeterStyle=Style#Variant#Background

[Icon]
Meter=Image
MeterStyle=Style#Variant#Icon | StyleLocationIcon

[Text]
Meter=STRING
MeterStyle=Style#Variant#Text
MeasureName=@LocationName

[Label]
Meter=STRING
MeterStyle=Style#Variant#Label
MeasureName=@LocationLatitude
MeasureName2=@LocationLongitude
Text=%1, %2