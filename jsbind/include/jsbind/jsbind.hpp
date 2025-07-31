#pragma once

#include "Undefined.hpp"

#include "Any.hpp"

#include "Object.hpp"

#include "Function.hpp"

#include "Promise.hpp"

#include "Array.hpp"

#include "Reflect.hpp"

#include "String.hpp"

#include "Null.hpp"

#include "Console.hpp"

#include "Set.hpp"

#include "Map.hpp"

#include "Math.hpp"

#include "Date.hpp"

#include "JSON.hpp"

#include "Error.hpp"

#include "time.hpp"

#include "Response.hpp"

#include "utils.hpp"

int32_t parse_int(const char *src);

int32_t parse_int(const char *src, int32_t radix);

double parse_float(const char *src);

jsbind::String atob(const jsbind::String &encoded);

jsbind::String btoa(const jsbind::String &data);