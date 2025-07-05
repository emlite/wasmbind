#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


namespace console {
    jsbind::Undefined assert();
    jsbind::Undefined assert(bool condition);
    jsbind::Undefined assert(bool condition, const jsbind::Any& data);
    jsbind::Undefined clear();
    jsbind::Undefined debug(const jsbind::Any& data);
    jsbind::Undefined error(const jsbind::Any& data);
    jsbind::Undefined info(const jsbind::Any& data);
    jsbind::Undefined log(const jsbind::Any& data);
    jsbind::Undefined table();
    jsbind::Undefined table(const jsbind::Any& tabularData);
    jsbind::Undefined table(const jsbind::Any& tabularData, const jsbind::Sequence<jsbind::DOMString>& properties);
    jsbind::Undefined trace(const jsbind::Any& data);
    jsbind::Undefined warn(const jsbind::Any& data);
    jsbind::Undefined dir();
    jsbind::Undefined dir(const jsbind::Any& item);
    jsbind::Undefined dir(const jsbind::Any& item, const jsbind::Object& options);
    jsbind::Undefined dirxml(const jsbind::Any& data);
    jsbind::Undefined count();
    jsbind::Undefined count(const jsbind::DOMString& label);
    jsbind::Undefined countReset();
    jsbind::Undefined countReset(const jsbind::DOMString& label);
    jsbind::Undefined group(const jsbind::Any& data);
    jsbind::Undefined groupCollapsed(const jsbind::Any& data);
    jsbind::Undefined groupEnd();
    jsbind::Undefined time();
    jsbind::Undefined time(const jsbind::DOMString& label);
    jsbind::Undefined timeLog();
    jsbind::Undefined timeLog(const jsbind::DOMString& label);
    jsbind::Undefined timeLog(const jsbind::DOMString& label, const jsbind::Any& data);
    jsbind::Undefined timeEnd();
    jsbind::Undefined timeEnd(const jsbind::DOMString& label);
} // namespace console

