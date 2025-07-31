#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class NDEFScanOptions;
class NDEFWriteOptions;
class NDEFMakeReadOnlyOptions;
class AbortSignal;


class NDEFScanOptions : public emlite::Val {
  explicit NDEFScanOptions(Handle h) noexcept;
public:
    static NDEFScanOptions take_ownership(Handle h) noexcept;
    explicit NDEFScanOptions(const emlite::Val &val) noexcept;
    NDEFScanOptions() noexcept;
    [[nodiscard]] NDEFScanOptions clone() const noexcept;
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

class NDEFWriteOptions : public emlite::Val {
  explicit NDEFWriteOptions(Handle h) noexcept;
public:
    static NDEFWriteOptions take_ownership(Handle h) noexcept;
    explicit NDEFWriteOptions(const emlite::Val &val) noexcept;
    NDEFWriteOptions() noexcept;
    [[nodiscard]] NDEFWriteOptions clone() const noexcept;
    [[nodiscard]] bool overwrite() const;
    void overwrite(bool value);
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

class NDEFMakeReadOnlyOptions : public emlite::Val {
  explicit NDEFMakeReadOnlyOptions(Handle h) noexcept;
public:
    static NDEFMakeReadOnlyOptions take_ownership(Handle h) noexcept;
    explicit NDEFMakeReadOnlyOptions(const emlite::Val &val) noexcept;
    NDEFMakeReadOnlyOptions() noexcept;
    [[nodiscard]] NDEFMakeReadOnlyOptions clone() const noexcept;
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

/// The NDEFReader class.
/// [`NDEFReader`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFReader)
class NDEFReader : public EventTarget {
    explicit NDEFReader(Handle h) noexcept;

public:
    explicit NDEFReader(const emlite::Val &val) noexcept;
    static NDEFReader take_ownership(Handle h) noexcept;

    [[nodiscard]] NDEFReader clone() const noexcept;
    /// The `new NDEFReader(..)` constructor, creating a new NDEFReader instance
    NDEFReader();
    /// Getter of the `onreading` attribute.
    /// [`NDEFReader.onreading`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFReader/onreading)
    [[nodiscard]] jsbind::Any onreading() const;
    /// Setter of the `onreading` attribute.
    /// [`NDEFReader.onreading`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFReader/onreading)
    void onreading(const jsbind::Any& value);
    /// Getter of the `onreadingerror` attribute.
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

