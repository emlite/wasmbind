#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class IDBOpenDBRequest;
class IDBDatabaseInfo;


class IDBDatabaseInfo : public emlite::Val {
  explicit IDBDatabaseInfo(Handle h) noexcept;
public:
    static IDBDatabaseInfo take_ownership(Handle h) noexcept;
    explicit IDBDatabaseInfo(const emlite::Val &val) noexcept;
    IDBDatabaseInfo() noexcept;
    [[nodiscard]] IDBDatabaseInfo clone() const noexcept;
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] long long version() const;
    void version(long long value);
};

/// The IDBFactory class.
/// [`IDBFactory`](https://developer.mozilla.org/en-US/docs/Web/API/IDBFactory)
class IDBFactory : public emlite::Val {
    explicit IDBFactory(Handle h) noexcept;

public:
    explicit IDBFactory(const emlite::Val &val) noexcept;
    static IDBFactory take_ownership(Handle h) noexcept;

    [[nodiscard]] IDBFactory clone() const noexcept;
    /// The open method.
    /// [`IDBFactory.open`](https://developer.mozilla.org/en-US/docs/Web/API/IDBFactory/open)
    IDBOpenDBRequest open(const jsbind::String& name);
    /// The open method.
    /// [`IDBFactory.open`](https://developer.mozilla.org/en-US/docs/Web/API/IDBFactory/open)
    IDBOpenDBRequest open(const jsbind::String& name, long long version);
    /// The deleteDatabase method.
    /// [`IDBFactory.deleteDatabase`](https://developer.mozilla.org/en-US/docs/Web/API/IDBFactory/deleteDatabase)
    IDBOpenDBRequest deleteDatabase(const jsbind::String& name);
    /// The databases method.
    /// [`IDBFactory.databases`](https://developer.mozilla.org/en-US/docs/Web/API/IDBFactory/databases)
    jsbind::Promise<jsbind::TypedArray<IDBDatabaseInfo>> databases();
    /// The cmp method.
    /// [`IDBFactory.cmp`](https://developer.mozilla.org/en-US/docs/Web/API/IDBFactory/cmp)
    short cmp(const jsbind::Any& first, const jsbind::Any& second);
};

