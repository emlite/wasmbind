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
    IDBDatabaseInfo clone() const noexcept;
    jsbind::String name() const;
    void name(const jsbind::String& value);
    long long version() const;
    void version(long long value);
};

class IDBFactory : public emlite::Val {
    explicit IDBFactory(Handle h) noexcept;

public:
    explicit IDBFactory(const emlite::Val &val) noexcept;
    static IDBFactory take_ownership(Handle h) noexcept;

    IDBFactory clone() const noexcept;
    IDBOpenDBRequest open(const jsbind::String& name);
    IDBOpenDBRequest open(const jsbind::String& name, long long version);
    IDBOpenDBRequest deleteDatabase(const jsbind::String& name);
    jsbind::Promise<jsbind::TypedArray<IDBDatabaseInfo>> databases();
    short cmp(const jsbind::Any& first, const jsbind::Any& second);
};

