!if 0
Copyright (c) Microsoft Corporation.  All rights reserved.
!endif
!if 0
Use of this source code is subject to the terms of the Microsoft shared
source or premium shared source license agreement under which you licensed
this source code. If you did not accept the terms of the license agreement,
you are not authorized to use this source code. For the terms of the license,
please see the license agreement between you and Microsoft or, if applicable,
see the SOURCE.RTF on your install media or the root of your tools installation.
THE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES OR INDEMNITIES.
!endif

!if "$(NOPASS0)"=="1"
scriptfiles:

!else

!if "$(WINCEREL)"=="1"

scriptfiles:
    copy scripts\scenarioscripts\allropsscript.txt $(_FLATRELEASEDIR)
    copy scripts\scenarioscripts\iescript.txt $(_FLATRELEASEDIR)
    copy scripts\scenarioscripts\rdpscript.txt $(_FLATRELEASEDIR)
    copy scripts\scenarioscripts\srccopysizes.txt $(_FLATRELEASEDIR)
    copy scripts\scenarioscripts\allropsscript.txt $(_RELEASEDIR)
    copy scripts\scenarioscripts\iescript.txt $(_RELEASEDIR)
    copy scripts\scenarioscripts\rdpscript.txt $(_RELEASEDIR)
    copy scripts\scenarioscripts\srccopysizes.txt $(_RELEASEDIR)
!else

scriptfiles:
    copy scripts\scenarioscripts\allropsscript.txt $(_RELEASEDIR)
    copy scripts\scenarioscripts\iescript.txt $(_RELEASEDIR)
    copy scripts\scenarioscripts\rdpscript.txt $(_RELEASEDIR)
    copy scripts\scenarioscripts\srccopysizes.txt $(_RELEASEDIR)
!endif

!endif