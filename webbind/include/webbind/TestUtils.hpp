#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


namespace TestUtils {
    jsbind::Promise<jsbind::Undefined> gc();
} // namespace TestUtils

