﻿#pragma once

#using <mscorlib.dll>
#using <System.dll>
#using <System.Data.dll>
#using <System.Xml.dll>

using namespace System::Security::Permissions;
[assembly:SecurityPermissionAttribute(SecurityAction::RequestMinimum, SkipVerification=false)];
// 
// This source code was auto-generated by xsd, Version=4.0.30319.1.
// 
using namespace System;
ref class world;


/// <summary>
///Represents a strongly typed in-memory cache of data.
///</summary>
[System::Serializable, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::ComponentModel::ToolboxItem(true), 
System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedDataSetSchema"), 
System::Xml::Serialization::XmlRootAttribute(L"world"), 
System::ComponentModel::Design::HelpKeywordAttribute(L"vs.data.DataSet")]
public ref class world : public ::System::Data::DataSet {
    public : ref class levelDataTable;
    public : ref class levelRow;
    public : ref class levelRowChangeEvent;
    
    private: world::levelDataTable^  tablelevel;
    
    private: ::System::Data::SchemaSerializationMode _schemaSerializationMode;
    
    public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    delegate System::Void levelRowChangeEventHandler(::System::Object^  sender, world::levelRowChangeEvent^  e);
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    world();
    protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    world(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::Browsable(false), 
    System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
    property world::levelDataTable^  level {
        world::levelDataTable^  get();
    }
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::BrowsableAttribute(true), 
    System::ComponentModel::DesignerSerializationVisibilityAttribute(::System::ComponentModel::DesignerSerializationVisibility::Visible)]
    virtual property ::System::Data::SchemaSerializationMode SchemaSerializationMode {
        ::System::Data::SchemaSerializationMode get() override;
        System::Void set(::System::Data::SchemaSerializationMode value) override;
    }
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::DesignerSerializationVisibilityAttribute(::System::ComponentModel::DesignerSerializationVisibility::Hidden)]
    property ::System::Data::DataTableCollection^  Tables {
        ::System::Data::DataTableCollection^  get() new;
    }
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::DesignerSerializationVisibilityAttribute(::System::ComponentModel::DesignerSerializationVisibility::Hidden)]
    property ::System::Data::DataRelationCollection^  Relations {
        ::System::Data::DataRelationCollection^  get() new;
    }
    
    protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    virtual ::System::Void InitializeDerivedDataSet() override;
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    virtual ::System::Data::DataSet^  Clone() override;
    
    protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    virtual ::System::Boolean ShouldSerializeTables() override;
    
    protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    virtual ::System::Boolean ShouldSerializeRelations() override;
    
    protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    virtual ::System::Void ReadXmlSerializable(::System::Xml::XmlReader^  reader) override;
    
    protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    virtual ::System::Xml::Schema::XmlSchema^  GetSchemaSerializable() override;
    
    internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Void InitVars();
    
    internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Void InitVars(::System::Boolean initTable);
    
    private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Void InitClass();
    
    private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Boolean ShouldSerializelevel();
    
    private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Void SchemaChanged(::System::Object^  sender, ::System::ComponentModel::CollectionChangeEventArgs^  e);
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedDataSetSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
    
    public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
    [System::Serializable, 
    System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
    ref class levelDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
        
        private: ::System::Data::DataColumn^  columnname;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event world::levelRowChangeEventHandler^  levelRowChanging;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event world::levelRowChangeEventHandler^  levelRowChanged;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event world::levelRowChangeEventHandler^  levelRowDeleting;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event world::levelRowChangeEventHandler^  levelRowDeleted;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        levelDataTable();
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        levelDataTable(::System::Data::DataTable^  table);
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        levelDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  nameColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false)]
        property ::System::Int32 Count {
            ::System::Int32 get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property world::levelRow^  default [::System::Int32 ] {
            world::levelRow^  get(::System::Int32 index);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void AddlevelRow(world::levelRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        world::levelRow^  AddlevelRow(System::String^  name);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Collections::IEnumerator^  GetEnumerator();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataTable^  Clone() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataTable^  CreateInstance() override;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitVars();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitClass();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        world::levelRow^  NewlevelRow();
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Type^  GetRowType() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void RemovelevelRow(world::levelRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
    };
    
    public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
    ref class levelRow : public ::System::Data::DataRow {
        
        private: world::levelDataTable^  tablelevel;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        levelRow(::System::Data::DataRowBuilder^  rb);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::String^  name {
            System::String^  get();
            System::Void set(System::String^  value);
        }
    };
    
    public : /// <summary>
///Row event argument class
///</summary>
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ref class levelRowChangeEvent : public ::System::EventArgs {
        
        private: world::levelRow^  eventRow;
        
        private: ::System::Data::DataRowAction eventAction;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        levelRowChangeEvent(world::levelRow^  row, ::System::Data::DataRowAction action);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property world::levelRow^  Row {
            world::levelRow^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataRowAction Action {
            ::System::Data::DataRowAction get();
        }
    };
};


inline world::world() {
    this->BeginInit();
    this->InitClass();
    ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &world::SchemaChanged);
    __super::Tables->CollectionChanged += schemaChangedHandler;
    __super::Relations->CollectionChanged += schemaChangedHandler;
    this->EndInit();
}

inline world::world(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context) : 
        ::System::Data::DataSet(info, context, false) {
    if (this->IsBinarySerialized(info, context) == true) {
        this->InitVars(false);
        ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler1 = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &world::SchemaChanged);
        this->Tables->CollectionChanged += schemaChangedHandler1;
        this->Relations->CollectionChanged += schemaChangedHandler1;
        return;
    }
    ::System::String^  strSchema = (cli::safe_cast<::System::String^  >(info->GetValue(L"XmlSchema", ::System::String::typeid)));
    if (this->DetermineSchemaSerializationMode(info, context) == ::System::Data::SchemaSerializationMode::IncludeSchema) {
        ::System::Data::DataSet^  ds = (gcnew ::System::Data::DataSet());
        ds->ReadXmlSchema((gcnew ::System::Xml::XmlTextReader((gcnew ::System::IO::StringReader(strSchema)))));
        if (ds->Tables[L"level"] != nullptr) {
            __super::Tables->Add((gcnew world::levelDataTable(ds->Tables[L"level"])));
        }
        this->DataSetName = ds->DataSetName;
        this->Prefix = ds->Prefix;
        this->Namespace = ds->Namespace;
        this->Locale = ds->Locale;
        this->CaseSensitive = ds->CaseSensitive;
        this->EnforceConstraints = ds->EnforceConstraints;
        this->Merge(ds, false, ::System::Data::MissingSchemaAction::Add);
        this->InitVars();
    }
    else {
        this->ReadXmlSchema((gcnew ::System::Xml::XmlTextReader((gcnew ::System::IO::StringReader(strSchema)))));
    }
    this->GetSerializationData(info, context);
    ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &world::SchemaChanged);
    __super::Tables->CollectionChanged += schemaChangedHandler;
    this->Relations->CollectionChanged += schemaChangedHandler;
}

inline world::levelDataTable^  world::level::get() {
    return this->tablelevel;
}

inline ::System::Data::SchemaSerializationMode world::SchemaSerializationMode::get() {
    return this->_schemaSerializationMode;
}
inline System::Void world::SchemaSerializationMode::set(::System::Data::SchemaSerializationMode value) {
    this->_schemaSerializationMode = __identifier(value);
}

inline ::System::Data::DataTableCollection^  world::Tables::get() {
    return __super::Tables;
}

inline ::System::Data::DataRelationCollection^  world::Relations::get() {
    return __super::Relations;
}

inline ::System::Void world::InitializeDerivedDataSet() {
    this->BeginInit();
    this->InitClass();
    this->EndInit();
}

inline ::System::Data::DataSet^  world::Clone() {
    world^  cln = (cli::safe_cast<world^  >(__super::Clone()));
    cln->InitVars();
    cln->SchemaSerializationMode = this->SchemaSerializationMode;
    return cln;
}

inline ::System::Boolean world::ShouldSerializeTables() {
    return false;
}

inline ::System::Boolean world::ShouldSerializeRelations() {
    return false;
}

inline ::System::Void world::ReadXmlSerializable(::System::Xml::XmlReader^  reader) {
    if (this->DetermineSchemaSerializationMode(reader) == ::System::Data::SchemaSerializationMode::IncludeSchema) {
        this->Reset();
        ::System::Data::DataSet^  ds = (gcnew ::System::Data::DataSet());
        ds->ReadXml(reader);
        if (ds->Tables[L"level"] != nullptr) {
            __super::Tables->Add((gcnew world::levelDataTable(ds->Tables[L"level"])));
        }
        this->DataSetName = ds->DataSetName;
        this->Prefix = ds->Prefix;
        this->Namespace = ds->Namespace;
        this->Locale = ds->Locale;
        this->CaseSensitive = ds->CaseSensitive;
        this->EnforceConstraints = ds->EnforceConstraints;
        this->Merge(ds, false, ::System::Data::MissingSchemaAction::Add);
        this->InitVars();
    }
    else {
        this->ReadXml(reader);
        this->InitVars();
    }
}

inline ::System::Xml::Schema::XmlSchema^  world::GetSchemaSerializable() {
    ::System::IO::MemoryStream^  stream = (gcnew ::System::IO::MemoryStream());
    this->WriteXmlSchema((gcnew ::System::Xml::XmlTextWriter(stream, nullptr)));
    stream->Position = 0;
    return ::System::Xml::Schema::XmlSchema::Read((gcnew ::System::Xml::XmlTextReader(stream)), nullptr);
}

inline ::System::Void world::InitVars() {
    this->InitVars(true);
}

inline ::System::Void world::InitVars(::System::Boolean initTable) {
    this->tablelevel = (cli::safe_cast<world::levelDataTable^  >(__super::Tables[L"level"]));
    if (initTable == true) {
        if (this->tablelevel != nullptr) {
            this->tablelevel->InitVars();
        }
    }
}

inline ::System::Void world::InitClass() {
    this->DataSetName = L"world";
    this->Prefix = L"";
    this->EnforceConstraints = true;
    this->SchemaSerializationMode = ::System::Data::SchemaSerializationMode::IncludeSchema;
    this->tablelevel = (gcnew world::levelDataTable());
    __super::Tables->Add(this->tablelevel);
}

inline ::System::Boolean world::ShouldSerializelevel() {
    return false;
}

inline ::System::Void world::SchemaChanged(::System::Object^  sender, ::System::ComponentModel::CollectionChangeEventArgs^  e) {
    if (e->Action == ::System::ComponentModel::CollectionChangeAction::Remove) {
        this->InitVars();
    }
}

inline ::System::Xml::Schema::XmlSchemaComplexType^  world::GetTypedDataSetSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
    world^  ds = (gcnew world());
    ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
    ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
    ::System::Xml::Schema::XmlSchemaAny^  any = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any->Namespace = ds->Namespace;
    sequence->Items->Add(any);
    type->Particle = sequence;
    ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
    if (xs->Contains(dsSchema->TargetNamespace)) {
        ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
        ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
        try {
            ::System::Xml::Schema::XmlSchema^  schema = nullptr;
            dsSchema->Write(s1);
            for (            ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();             ) {
                schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                s2->SetLength(0);
                schema->Write(s2);
                if (s1->Length == s2->Length) {
                    s1->Position = 0;
                    s2->Position = 0;
                    for (                    ; ((s1->Position != s1->Length) 
                                && (s1->ReadByte() == s2->ReadByte()));                     ) {
                        ;
                    }
                    if (s1->Position == s1->Length) {
                        return type;
                    }
                }
            }
        }
        finally {
            if (s1 != nullptr) {
                s1->Close();
            }
            if (s2 != nullptr) {
                s2->Close();
            }
        }
    }
    xs->Add(dsSchema);
    return type;
}


inline world::levelDataTable::levelDataTable() {
    this->TableName = L"level";
    this->BeginInit();
    this->InitClass();
    this->EndInit();
}

inline world::levelDataTable::levelDataTable(::System::Data::DataTable^  table) {
    this->TableName = table->TableName;
    if (table->CaseSensitive != table->DataSet->CaseSensitive) {
        this->CaseSensitive = table->CaseSensitive;
    }
    if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
        this->Locale = table->Locale;
    }
    if (table->Namespace != table->DataSet->Namespace) {
        this->Namespace = table->Namespace;
    }
    this->Prefix = table->Prefix;
    this->MinimumCapacity = table->MinimumCapacity;
}

inline world::levelDataTable::levelDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context) : 
        ::System::Data::DataTable(info, context) {
    this->InitVars();
}

inline ::System::Data::DataColumn^  world::levelDataTable::nameColumn::get() {
    return this->columnname;
}

inline ::System::Int32 world::levelDataTable::Count::get() {
    return this->Rows->Count;
}

inline world::levelRow^  world::levelDataTable::default::get(::System::Int32 index) {
    return (cli::safe_cast<world::levelRow^  >(this->Rows[index]));
}

inline ::System::Void world::levelDataTable::AddlevelRow(world::levelRow^  row) {
    this->Rows->Add(row);
}

inline world::levelRow^  world::levelDataTable::AddlevelRow(System::String^  name) {
    world::levelRow^  rowlevelRow = (cli::safe_cast<world::levelRow^  >(this->NewRow()));
    cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(1) {name};
    rowlevelRow->ItemArray = columnValuesArray;
    this->Rows->Add(rowlevelRow);
    return rowlevelRow;
}

inline ::System::Collections::IEnumerator^  world::levelDataTable::GetEnumerator() {
    return this->Rows->GetEnumerator();
}

inline ::System::Data::DataTable^  world::levelDataTable::Clone() {
    world::levelDataTable^  cln = (cli::safe_cast<world::levelDataTable^  >(__super::Clone()));
    cln->InitVars();
    return cln;
}

inline ::System::Data::DataTable^  world::levelDataTable::CreateInstance() {
    return (gcnew world::levelDataTable());
}

inline ::System::Void world::levelDataTable::InitVars() {
    this->columnname = __super::Columns[L"name"];
}

inline ::System::Void world::levelDataTable::InitClass() {
    this->columnname = (gcnew ::System::Data::DataColumn(L"name", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columnname);
    this->columnname->AllowDBNull = false;
    this->columnname->Namespace = L"";
}

inline world::levelRow^  world::levelDataTable::NewlevelRow() {
    return (cli::safe_cast<world::levelRow^  >(this->NewRow()));
}

inline ::System::Data::DataRow^  world::levelDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
    return (gcnew world::levelRow(builder));
}

inline ::System::Type^  world::levelDataTable::GetRowType() {
    return world::levelRow::typeid;
}

inline ::System::Void world::levelDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanged(e);
    {
        this->levelRowChanged(this, (gcnew world::levelRowChangeEvent((cli::safe_cast<world::levelRow^  >(e->Row)), e->Action)));
    }
}

inline ::System::Void world::levelDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanging(e);
    {
        this->levelRowChanging(this, (gcnew world::levelRowChangeEvent((cli::safe_cast<world::levelRow^  >(e->Row)), e->Action)));
    }
}

inline ::System::Void world::levelDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleted(e);
    {
        this->levelRowDeleted(this, (gcnew world::levelRowChangeEvent((cli::safe_cast<world::levelRow^  >(e->Row)), e->Action)));
    }
}

inline ::System::Void world::levelDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleting(e);
    {
        this->levelRowDeleting(this, (gcnew world::levelRowChangeEvent((cli::safe_cast<world::levelRow^  >(e->Row)), e->Action)));
    }
}

inline ::System::Void world::levelDataTable::RemovelevelRow(world::levelRow^  row) {
    this->Rows->Remove(row);
}

inline ::System::Xml::Schema::XmlSchemaComplexType^  world::levelDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
    ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
    ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
    world^  ds = (gcnew world());
    ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
    any1->MinOccurs = ::System::Decimal(0);
    any1->MaxOccurs = ::System::Decimal::MaxValue;
    any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
    sequence->Items->Add(any1);
    ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
    any2->MinOccurs = ::System::Decimal(1);
    any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
    sequence->Items->Add(any2);
    ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
    attribute1->Name = L"namespace";
    attribute1->FixedValue = ds->Namespace;
    type->Attributes->Add(attribute1);
    ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
    attribute2->Name = L"tableTypeName";
    attribute2->FixedValue = L"levelDataTable";
    type->Attributes->Add(attribute2);
    type->Particle = sequence;
    ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
    if (xs->Contains(dsSchema->TargetNamespace)) {
        ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
        ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
        try {
            ::System::Xml::Schema::XmlSchema^  schema = nullptr;
            dsSchema->Write(s1);
            for (            ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();             ) {
                schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                s2->SetLength(0);
                schema->Write(s2);
                if (s1->Length == s2->Length) {
                    s1->Position = 0;
                    s2->Position = 0;
                    for (                    ; ((s1->Position != s1->Length) 
                                && (s1->ReadByte() == s2->ReadByte()));                     ) {
                        ;
                    }
                    if (s1->Position == s1->Length) {
                        return type;
                    }
                }
            }
        }
        finally {
            if (s1 != nullptr) {
                s1->Close();
            }
            if (s2 != nullptr) {
                s2->Close();
            }
        }
    }
    xs->Add(dsSchema);
    return type;
}


inline world::levelRow::levelRow(::System::Data::DataRowBuilder^  rb) : 
        ::System::Data::DataRow(rb) {
    this->tablelevel = (cli::safe_cast<world::levelDataTable^  >(this->Table));
}

inline System::String^  world::levelRow::name::get() {
    return (cli::safe_cast<::System::String^  >(this[this->tablelevel->nameColumn]));
}
inline System::Void world::levelRow::name::set(System::String^  value) {
    this[this->tablelevel->nameColumn] = value;
}


inline world::levelRowChangeEvent::levelRowChangeEvent(world::levelRow^  row, ::System::Data::DataRowAction action) {
    this->eventRow = row;
    this->eventAction = action;
}

inline world::levelRow^  world::levelRowChangeEvent::Row::get() {
    return this->eventRow;
}

inline ::System::Data::DataRowAction world::levelRowChangeEvent::Action::get() {
    return this->eventAction;
}
