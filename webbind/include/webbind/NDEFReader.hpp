#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

class NDEFScanOptions;
class NDEFWriteOptions;
class NDEFMakeReadOnlyOptions;

/// Interface NDEFReader
/// [`NDEFReader`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFReader)
class NDEFReader : public EventTarget {
    explicit NDEFReader(Handle h) noexcept;
public:
    explicit NDEFReader(const emlite::Val &val) noexcept;
    static NDEFReader take_ownership(Handle h) noexcept;
    [[nodiscard]] NDEFReader clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new NDEFReader(..)` constructor, creating a new NDEFReader instance
    NDEFReader();
    /// [`NDEFReader.onreading`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFReader/onreading)
    /// [`NDEFReader.onreading`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFReader/onreading)
    [[nodiscard]] jsbind::Any onreading() const;
    /// Setter of the `onreading` attribute.
    /// [`NDEFReader.onreading`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFReader/onreading)
    void onreading(const jsbind::Any& value);
    /// [`NDEFReader.onreadingerror`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFReader/onreadingerror)
    /// [`NDEFReader.onreadingerror`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFReader/onreadingerror)
    [[nodiscard]] jsbind::Any onreadingerror() const;
    /// Setter of the `onreadingerror` attribute.
    /// [`NDEFReader.onreadingerror`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFReader/onreadingerror)
    void onreadingerror(const jsbind::Any& value);
    /// The scan method.
    /// [`NDEFReader.scan`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFReader/scan)
    jsbind::Promise<jsbind::Undefined> scan();
    /// The scan method.
    /// [`NDEFReader.scan`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFReader/scan)
    jsbind::Promise<jsbind::Undefined> scan(const NDEFScanOptions& options);
    /// The write method.
    /// [`NDEFReader.write`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFReader/write)
    jsbind::Promise<jsbind::Undefined> write(const jsbind::Any& message);
    /// The write method.
    /// [`NDEFReader.write`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFReader/write)
    jsbind::Promise<jsbind::Undefined> write(const jsbind::Any& message, const NDEFWriteOptions& options);
    /// The makeReadOnly method.
    /// [`NDEFReader.makeReadOnly`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFReader/makeReadOnly)
    jsbind::Promise<jsbind::Undefined> makeReadOnly();
    /// The makeReadOnly method.
    /// [`NDEFReader.makeReadOnly`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFReader/makeReadOnly)
    jsbind::Promise<jsbind::Undefined> makeReadOnly(const NDEFMakeReadOnlyOptions& options);
};

} // namespace webbind