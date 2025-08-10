#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>


namespace webbind {

/// Namespace console
/// [`console`](https://developer.mozilla.org/en-US/docs/Web/API/console)
namespace console {
    /// The assert function.
    /// [`console.assert`](https://developer.mozilla.org/en-US/docs/Web/API/console/assert)
    jsbind::Undefined assert();
    /// The assert function.
    /// [`console.assert`](https://developer.mozilla.org/en-US/docs/Web/API/console/assert)
    jsbind::Undefined assert(bool condition);
    /// The assert function.
    /// [`console.assert`](https://developer.mozilla.org/en-US/docs/Web/API/console/assert)
    jsbind::Undefined assert(bool condition, const jsbind::Any& data);
    /// The clear function.
    /// [`console.clear`](https://developer.mozilla.org/en-US/docs/Web/API/console/clear)
    jsbind::Undefined clear();
    /// The debug function.
    /// [`console.debug`](https://developer.mozilla.org/en-US/docs/Web/API/console/debug)
    jsbind::Undefined debug(const jsbind::Any& data);
    /// The error function.
    /// [`console.error`](https://developer.mozilla.org/en-US/docs/Web/API/console/error)
    jsbind::Undefined error(const jsbind::Any& data);
    /// The info function.
    /// [`console.info`](https://developer.mozilla.org/en-US/docs/Web/API/console/info)
    jsbind::Undefined info(const jsbind::Any& data);
    /// The log function.
    /// [`console.log`](https://developer.mozilla.org/en-US/docs/Web/API/console/log)
    jsbind::Undefined log(const jsbind::Any& data);
    /// The table function.
    /// [`console.table`](https://developer.mozilla.org/en-US/docs/Web/API/console/table)
    jsbind::Undefined table();
    /// The table function.
    /// [`console.table`](https://developer.mozilla.org/en-US/docs/Web/API/console/table)
    jsbind::Undefined table(const jsbind::Any& tabularData);
    /// The table function.
    /// [`console.table`](https://developer.mozilla.org/en-US/docs/Web/API/console/table)
    jsbind::Undefined table(const jsbind::Any& tabularData, const jsbind::TypedArray<jsbind::String>& properties);
    /// The trace function.
    /// [`console.trace`](https://developer.mozilla.org/en-US/docs/Web/API/console/trace)
    jsbind::Undefined trace(const jsbind::Any& data);
    /// The warn function.
    /// [`console.warn`](https://developer.mozilla.org/en-US/docs/Web/API/console/warn)
    jsbind::Undefined warn(const jsbind::Any& data);
    /// The dir function.
    /// [`console.dir`](https://developer.mozilla.org/en-US/docs/Web/API/console/dir)
    jsbind::Undefined dir();
    /// The dir function.
    /// [`console.dir`](https://developer.mozilla.org/en-US/docs/Web/API/console/dir)
    jsbind::Undefined dir(const jsbind::Any& item);
    /// The dir function.
    /// [`console.dir`](https://developer.mozilla.org/en-US/docs/Web/API/console/dir)
    jsbind::Undefined dir(const jsbind::Any& item, const jsbind::Object& options);
    /// The dirxml function.
    /// [`console.dirxml`](https://developer.mozilla.org/en-US/docs/Web/API/console/dirxml)
    jsbind::Undefined dirxml(const jsbind::Any& data);
    /// The count function.
    /// [`console.count`](https://developer.mozilla.org/en-US/docs/Web/API/console/count)
    jsbind::Undefined count();
    /// The count function.
    /// [`console.count`](https://developer.mozilla.org/en-US/docs/Web/API/console/count)
    jsbind::Undefined count(const jsbind::String& label);
    /// The countReset function.
    /// [`console.countReset`](https://developer.mozilla.org/en-US/docs/Web/API/console/countReset)
    jsbind::Undefined countReset();
    /// The countReset function.
    /// [`console.countReset`](https://developer.mozilla.org/en-US/docs/Web/API/console/countReset)
    jsbind::Undefined countReset(const jsbind::String& label);
    /// The group function.
    /// [`console.group`](https://developer.mozilla.org/en-US/docs/Web/API/console/group)
    jsbind::Undefined group(const jsbind::Any& data);
    /// The groupCollapsed function.
    /// [`console.groupCollapsed`](https://developer.mozilla.org/en-US/docs/Web/API/console/groupCollapsed)
    jsbind::Undefined groupCollapsed(const jsbind::Any& data);
    /// The groupEnd function.
    /// [`console.groupEnd`](https://developer.mozilla.org/en-US/docs/Web/API/console/groupEnd)
    jsbind::Undefined groupEnd();
    /// The time function.
    /// [`console.time`](https://developer.mozilla.org/en-US/docs/Web/API/console/time)
    jsbind::Undefined time();
    /// The time function.
    /// [`console.time`](https://developer.mozilla.org/en-US/docs/Web/API/console/time)
    jsbind::Undefined time(const jsbind::String& label);
    /// The timeLog function.
    /// [`console.timeLog`](https://developer.mozilla.org/en-US/docs/Web/API/console/timeLog)
    jsbind::Undefined timeLog();
    /// The timeLog function.
    /// [`console.timeLog`](https://developer.mozilla.org/en-US/docs/Web/API/console/timeLog)
    jsbind::Undefined timeLog(const jsbind::String& label);
    /// The timeLog function.
    /// [`console.timeLog`](https://developer.mozilla.org/en-US/docs/Web/API/console/timeLog)
    jsbind::Undefined timeLog(const jsbind::String& label, const jsbind::Any& data);
    /// The timeEnd function.
    /// [`console.timeEnd`](https://developer.mozilla.org/en-US/docs/Web/API/console/timeEnd)
    jsbind::Undefined timeEnd();
    /// The timeEnd function.
    /// [`console.timeEnd`](https://developer.mozilla.org/en-US/docs/Web/API/console/timeEnd)
    jsbind::Undefined timeEnd(const jsbind::String& label);
} // namespace console

} // namespace webbind