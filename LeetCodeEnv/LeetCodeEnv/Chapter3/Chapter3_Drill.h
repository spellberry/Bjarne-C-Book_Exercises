#pragma once
void Drill_Output(double x, double y);

double Drill_Min(double x, double y);

double Drill_Max(double x, double y);

bool Drill_Equal(double x, double y);

bool CheckLegalUnits(string unit);

void Drill_Main();

void Drill_MainV2();

constexpr double doubleTolerance = 1.0 / 100;
constexpr double CM_TO_METERS = 0.01;
constexpr double INCH_TO_METERS = 2.54*CM_TO_METERS;
constexpr double FT_TO_METERS = 12*INCH_TO_METERS;

