/*
 *  This file is part of Signus: The Artefact Wars (http://signus.sf.net)
 *
 *  Copyright (C) 1997, 1998, 2002
 *  Vaclav Slavik, Richard Wunsch, Marek Wunsch
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */


// Tabulky pro mapu:


byte TabTerrIcons[1024] = {
// Zakl. ter:
  0,152,35,54,157,26,88,22,
152,152,35,35,54,54,157,157,26,26,88,215,
// Prechody:
157,157,157,157,157,157,157,157,157,157,157,157,
35,35,35,35,35,35,35,35,35,35,35,35,
157,157,157,157,157,157,157,157,157,157,157,157,
157,157,157,157,157,157,157,157,157,157,157,157,
26,26,26,26,26,26,26,26,26,26,26,26,
152,152,152,152,152,152,152,152,152,152,152,152,
26,26,26,26,26,26,26,26,26,26,26,26,
// Velke sikme:
  0,155,32,50,160,22,215, 71, 71,151,151,233,233,151,151, 87, 87,151,151,  0,
  0,155,32,50,160,22,215, 71, 71,151,151,233,233,151,151, 87, 87,151,151,  0,
  0,155,32,50,160,22,215, 71, 71,151,151,233,233,151,151, 87, 87,151,151,  0,
  0,155,32,50,160,22,215, 71, 71,151,151,233,233,151,151, 87, 87,151,151,  0,
// Male sikme:
  0,155,32,50,160,22,215, 24,
  0,155,32,50,160,22,215, 24,
  0,155,32,50,160,22,215, 24,
  0,155,32,50,160,22,215, 24,
  0,155,32,50,160,22,215, 24,
  0,155,32,50,160,22,215, 24,  0,  0,  0,  0,  0,  0,  0,  0,
  0,155,32,50,160,22,215, 24,
 155,154,32,50,160,22,215, 24,
// Zakl. ter:
87,87,87,87,87,87,87,87,
87,87,87,87,87,87,87,87,87,87,87,87,
// Prechody:
87,87,87,87,87,87,87,87,87,87,87,87,
87,87,87,87,157,157,157,157,157,157,157,157,
157,157,157,157,87,87,87,87,87,87,87,87,
87,87,87,87,54,54,54,54,152,152,152,152,
152,152,35,35,35,35,157,157,157,157,26,26,
26,26,54,54,54,54,157,157,157,157,58,58,
58,58, 87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
// Velke sikme:
  0,151,233, 71,105, 87,215, 71, 71,151,151,233,233,151,151, 87, 87,151,151,  0,
  0,151,233, 71,105, 87,215, 71, 71,151,151,233,233,151,151, 87, 87,151,151,  0,
  0,151,233, 71,105, 87,215, 71, 71,151,151,233,233,151,151, 87, 87,151,151,  0,
  0,151,233, 71,105, 87,215, 71, 71,151,151,233,233,151,151, 87, 87,151,151,  0,
// Male sikme:
  0,151,233, 71,105, 87,215, 24,
  0,151,233, 71,105, 87,215, 24,
  0,151,233, 71,105, 87,215, 24,
  0,151,233, 71,105, 87,215, 24,
  0,151,233, 71,105, 87,215, 24,
  0,151,233, 71,105, 87,215, 24,  0,  0,  0,  0,  0,  0,  0,  0,
  0,151,233, 71,105, 87,215, 24,
  0,151,233, 71,105, 87,215, 24,
// Zakl. ter:
87,87,87,87,87,87,87,87,
87,87,87,87,87,87,87,87,87,87,87,87,
// Prechody:
87,87,87,87,87,87,87,87,87,87,87,87,
87,87,87,87,151,151,151,151,151,151,151,151,
233,233,233,233,87,87,87,87,87,87,87,87,
87,87,87,87,151,151,151,151,151,151,151,151,
 87, 87, 87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
151,151,151,151,151,151,151,151,151,151,151,151,
 87, 87, 87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
// Velke sikme:
  0,151,233, 71,105, 87,215, 71, 71,151,151,233,233,151,151, 87, 87,151,151,  0,
  0,151,233, 71,105, 87,215, 71, 71,151,151,233,233,151,151, 87, 87,151,151,  0,
  0,151,233, 71,105, 87,215, 71, 71,151,151,233,233,151,151, 87, 87,151,151,  0,
  0,151,233, 71,105, 87,215, 71, 71,151,151,233,233,151,151, 87, 87,151,151,  0,
// Male sikme:
  0,151,233, 71,105, 87,215, 24,
  0,151,233, 71,105, 87,215, 24,
  0,151,233, 71,105, 87,215, 24,
  0,151,233, 71,105, 87,215, 24,
  0,151,233, 71,105, 87,215, 24,
  0,151,233, 71,105, 87,215, 24,  0,  0,  0,  0,  0,  0,  0,  0,
  0,151,233, 71,105, 87,215, 24,
  0,151,233, 71,105, 87,215, 24,
// Zakl. ter:
87,87,87,87,87,87,87,87,
87,87,87,87,87,87,87,87,87,87,87,87,
// Prechody:
87,87,87,87,87,87,87,87,87,87,87,87,
87,87,87,87,151,151,151,151,151,151,151,151,
233,233,233,233,87,87,87,87,87,87,87,87,
87,87,87,87,151,151,151,151,151,151,151,151,
 87, 87, 87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
151,151,151,151,151,151,151,151,151,151,151,151,
 87, 87, 87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
// Velke sikme:
  0,151,233, 71,105, 87,215, 71, 71,151,151,233,233,151,151, 87, 87,151,151,  0,
  0,151,233, 71,105, 87,215, 71, 71,151,151,233,233,151,151, 87, 87,151,151,  0,
  0,151,233, 71,105, 87,215, 71, 71,151,151,233,233,151,151, 87, 87,151,151,  0,
  0,151,233, 71,105, 87,215, 71, 71,151,151,233,233,151,151, 87, 87,151,151,  0,
// Male sikme:
  0,151,233, 71,105, 87,215, 24,
  0,151,233, 71,105, 87,215, 24,
  0,151,233, 71,105, 87,215, 24,
  0,151,233, 71,105, 87,215, 24,
  0,151,233, 71,105, 87,215, 24,
  0,151,233, 71,105, 87,215, 24,  0,  0,  0,  0,  0,  0,  0,  0,
  0,151,233, 71,105, 87,215, 24,
  0,151,233, 71,105, 87,215, 24,
};



byte TabTerr2Icons[1024] = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  1,  1,  1,  1,  1,  1,  1,  1,  1,
1,  1,  1,  1,  1,  1,  1,  0,  0,  1,
0,  0,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,
1,1,1,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,1,1,1,
1,1,1,1,1,1,1,1,1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,
0,0,0,0, 0, 0, 1, 1, 0, 0,
0, 0,  0,  0,  0,  0,  0,  0,  0, 0,
0, 0, 0, 0, 0, 0, 0,  0,  0,  0,
0, 0, 0, 0, 0,  0,  0,  0, 0, 0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  1, 0, 0,  1,  1,1,1,  1,  1,
0, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0, 22, 22, 22,
22, 22, 22,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0, 0, 0, 0, 0,0, 0, 0,
0, 0, 0, 0, 0,0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0, 0,0,0, 0,0,
0,0, 0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  1,  1,  1,  1,  1,  1,  1,  1,  1,
1,  1,  1,  1,  1,  1,  1,  0,  0,  1,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  1,  1,  1,  1,  1,  1,  1,  1,  1,
1,  1,  1,  1,  1,  1,  1,  0,  0,  1,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,
};



byte TabTerrIconsD[1024] = {
// Zakl. ter:
  0,154,32,51,159,24,85,20,
154,154,32,32,51,51,159,159,24,24,85,219,
// Prechody:
159,159,159,159,159,159,159,159,159,159,159,159,
32,32,32,32,32,32,32,32,32,32,32,32,
159,159,159,159,159,159,159,159,159,159,159,159,
159,159,159,159,159,159,159,159,159,159,159,159,
24,24,24,24,24,24,24,24,24,24,24,24,
154,154,154,154,154,154,154,154,154,154,154,154,
24,24,24,24,24,24,24,24,24,24,24,24,
// Velke sikme:
  0,157,30,48,162,20,219,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,157,30,48,162,20,219,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,157,30,48,162,20,219,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,157,30,48,162,20,219,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
// Male sikme:
  0,157,30,48,162,20,219, 20,
  0,157,30,48,162,20,219, 20,
  0,157,30,48,162,20,219, 20,
  0,157,30,48,162,20,219, 20,
  0,157,30,48,162,20,219, 20,
  0,157,30,48,162,20,219, 20,  0,  0,  0,  0,  0,  0,  0,  0,
  0,157,30,48,162,20,219, 20,
 157,156,30,48,162,20,219, 20,
// Zakl. ter:
85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,
// Prechody:
85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,159,159,159,159,159,159,159,159,
159,159,159,159,85,85,85,85,85,85,85,85,
85,85,85,85,51,51,51,51,154,154,154,154,
154,154,32,32,32,32,159,159,159,159,24,24,
24,24,51,51,51,51,159,159,159,159,55,55,
55,55, 91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
// Velke sikme:
  0,155,238, 76,109, 91,219,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,155,238, 76,109, 91,219,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,155,238, 76,109, 91,219,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,155,238, 76,109, 91,219,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
// Male sikme:
  0,155,238, 76,109, 91,219, 20,
  0,155,238, 76,109, 91,219, 20,
  0,155,238, 76,109, 91,219, 20,
  0,155,238, 76,109, 91,219, 20,
  0,155,238, 76,109, 91,219, 20,
  0,155,238, 76,109, 91,219, 20,  0,  0,  0,  0,  0,  0,  0,  0,
  0,155,238, 76,109, 91,219, 20,
  0,155,238, 76,109, 91,219, 20,
// Zakl. ter:
85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,
// Prechody:
85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,155,155,155,155,155,155,155,155,
238,238,238,238,85,85,85,85,85,85,85,85,
85,85,85,85,155,155,155,155,155,155,155,155,
 91, 91, 91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
155,155,155,155,155,155,155,155,155,155,155,155,
 91, 91, 91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
// Velke sikme:
  0,155,238, 76,109, 91,219,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,155,238, 76,109, 91,219,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,155,238, 76,109, 91,219,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,155,238, 76,109, 91,219,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
// Male sikme:
  0,155,238, 76,109, 91,219, 20,
  0,155,238, 76,109, 91,219, 20,
  0,155,238, 76,109, 91,219, 20,
  0,155,238, 76,109, 91,219, 20,
  0,155,238, 76,109, 91,219, 20,
  0,155,238, 76,109, 91,219, 20,  0,  0,  0,  0,  0,  0,  0,  0,
  0,155,238, 76,109, 91,219, 20,
  0,155,238, 76,109, 91,219, 20,
// Zakl. ter:
85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,
// Prechody:
85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,155,155,155,155,155,155,155,155,
238,238,238,238,85,85,85,85,85,85,85,85,
85,85,85,85,155,155,155,155,155,155,155,155,
 91, 91, 91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
155,155,155,155,155,155,155,155,155,155,155,155,
 91, 91, 91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
// Velke sikme:
  0,155,238, 76,109, 91,219,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,155,238, 76,109, 91,219,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,155,238, 76,109, 91,219,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,155,238, 76,109, 91,219,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
// Male sikme:
  0,155,238, 76,109, 91,219, 20,
  0,155,238, 76,109, 91,219, 20,
  0,155,238, 76,109, 91,219, 20,
  0,155,238, 76,109, 91,219, 20,
  0,155,238, 76,109, 91,219, 20,
  0,155,238, 76,109, 91,219, 20,  0,  0,  0,  0,  0,  0,  0,  0,
  0,155,238, 76,109, 91,219, 20,
  0,155,238, 76,109, 91,219, 20,
};



byte TabTerr2IconsD[1024] = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  1,  1,  1,  1,  1,  1,  1,  1,  1,
1,  1,  1,  1,  1,  1,  1,  0,  0,  1,
0,  0,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,
1,1,1,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,1,1,1,
1,1,1,1,1,1,1,1,1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,
0,0,0,0, 0, 0, 1, 1, 0, 0,
0, 0,  0,  0,  0,  0,  0,  0,  0, 0,
0, 0, 0, 0, 0, 0, 0,  0,  0,  0,
0, 0, 0, 0, 0,  0,  0,  0, 0, 0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  1, 0, 0,  1,  1,1,1,  1,  1,
0, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0, 20, 20, 20,
20, 20, 20,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0, 0, 0, 0, 0,0, 0, 0,
0, 0, 0, 0, 0,0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0, 0,0,0, 0,0,
0,0, 0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  1,  1,  1,  1,  1,  1,  1,  1,  1,
1,  1,  1,  1,  1,  1,  1,  0,  0,  1,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  1,  1,  1,  1,  1,  1,  1,  1,  1,
1,  1,  1,  1,  1,  1,  1,  0,  0,  1,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0
};

