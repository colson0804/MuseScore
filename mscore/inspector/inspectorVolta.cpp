//=============================================================================
//  MuseScore
//  Music Composition & Notation
//  $Id:$
//
//  Copyright (C) 2012 Werner Schweer
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License version 2
//  as published by the Free Software Foundation and appearing in
//  the file LICENSE.GPL
//=============================================================================

#include "inspectorVolta.h"
#include "musescore.h"
#include "libmscore/volta.h"
#include "libmscore/score.h"

namespace Ms {

//---------------------------------------------------------
//   InspectorVolta
//---------------------------------------------------------

InspectorVolta::InspectorVolta(QWidget* parent)
   : InspectorBase(parent)
      {
      e.setupUi(addWidget());
      l.setupUi(addWidget());
      setupLineStyle(l.lineStyle);
      tl.setupUi(addWidget());
      v.setupUi(addWidget());

      iList = {
            { P_COLOR,       0, 0, e.color,      e.resetColor      },
            { P_VISIBLE,     0, 0, e.visible,    e.resetVisible    },
            { P_USER_OFF,    0, 0, e.offsetX,    e.resetX          },
            { P_USER_OFF,    1, 0, e.offsetY,    e.resetY          },
            { P_DIAGONAL,    0, 0, l.diagonal,   l.resetDiagonal   },
            { P_LINE_COLOR,  0, 0, l.lineColor,  l.resetLineColor  },
            { P_LINE_WIDTH,  0, 0, l.lineWidth,  l.resetLineWidth  },
            { P_LINE_STYLE,  0, 0, l.lineStyle,  l.resetLineStyle  },
            // tl
            { P_VOLTA_TYPE,  0, 0, v.voltaType,  v.resetVoltaType  }
            };

      mapSignals();
      }
}

