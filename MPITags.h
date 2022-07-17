enum {
    MPI_ROOT_RANK,
    TAG_COMMUNICATION_TABLE_HYDRO,

    TAG_PREDECOMPOSITION_PRECOMM,
    TAG_PREDECOMPOSITION_POS,
    TAG_PREDECOMPOSITION_LIST,

    TAG_DECOMPOSITION_PRECOMM,
    TAG_DECOMPOSITION_SENDSIZE,
    TAG_DECOMPOSITION_SENDNTYPES,
    TAG_DECOMPOSITION_SENDDATA,

    TAG_PLANTTREE_EXTENSITY,

    TAG_FORCE_DIRECT_SEND, // export / import
    TAG_FORCE_DIRECT_RECV,
    TAG_FORCE_GRAPE_SEND,
    TAG_FORCE_GRAPE_RECV,
    TAG_FORCE_TREE_PRECOMM,
    TAG_FORCE_TREE_EXPORT,
    TAG_FORCE_TREE_IMPORT,
    TAG_FORCE_TREE_SEND,
    TAG_FORCE_TREE_RECV,
    TAG_FORCE_TREEGRAPE_PRECOMM,
    TAG_FORCE_TREEGRAPE_SEND,
    TAG_FORCE_TREEGRAPE_RECV,
    TAG_FORCE_PARALLELTREEGRAPE_PRECOMM,
    TAG_FORCE_PARALLELTREEGRAPE_EXPORT,
    TAG_FORCE_LET_PRECOMM,
    TAG_FORCE_LET_POS,
    TAG_FORCE_LET_MASS,
    TAG_FORCE_LET_EXPORT,

    TAG_POTENTIAL_DIRECT_SENDRECV, 

    TAG_SPH_DENSITY_PRECOMM,
    TAG_SPH_DENSITY_EXPORT,
    TAG_SPH_DENSITY_IMPORT,
    TAG_SPH_ACC_PRECOMM,
    TAG_SPH_ACC_EXPORT,
    TAG_SPH_ACC_IMPORT,
    TAG_SPH_KERNEL_PRECOMM,
    TAG_SPH_KERNEL_EXPORT,
    TAG_SPH_KERNEL_IMPORT,

    TAG_FEEDBACK_PRECOMM,
    TAG_FEEDBACK_EXPORT,
    TAG_FEEDBACK_IMPORT,
    TAG_FEEDBACK_DELAYED_PRECOMM,
    TAG_FEEDBACK_DELAYED_EXPORT,
    TAG_FEEDBACK_DELAYED_IMPORT,

    TAG_STELLARFEEDBACK_PRECOMM,
    TAG_STELLARFEEDBACK_EXPORT,
    TAG_STELLARFEEDBACK_IMPORT,

    TAG_SINK_PRECOMM,
    TAG_SINK_EXPORT,
    TAG_SINK_IMPORT,

    TAG_HII_DENSITY_PRECOMM,
    TAG_HII_DENSITY_EXPORT,
    TAG_HII_DENSITY_IMPORT,
};
