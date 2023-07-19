<br/>
<center>
<img src="https://cdn.entitysystems.co/vrdb_logo.png" width="100">
</center>

# WELCOME TO VRDB
## Vector Relational Database
**Note:** This project is currently under development, and features and performance metrics
are subject to change.

### Live Development Streaming
I am live streaming the development process of 
the database on Twitch and keeping the VODs on YouTube! Join the Twitch channel to get an exclusive behind-the-scenes
look at the creation of the database, interact with me live, 
and stay updated on the latest progress.

Twitch: [View live channel](https://www.twitch.tv/khamasito) <br>
Youtube: [View VOD channel](https://www.youtube.com/channel/UC-4lgc6xsNIz-QfokfcVh9w)

### WHAT IS VRDB?

VRDB is a lightweight noSQL relational database server with graph capabilities and fixed schemas.
It is intended to be used on small scale systems that require a network accessible database.

### WHY VRDB?

People don't like noSQL because there is no schema or relationships, people don't like SQL because, you know, SQL...
So then, why not just use a noSQL database with a schema and advanced relationships? Sounds perfect right?

Then, there is also the common consensus that using a full-fledged heavy database server on light hardware for small scale operations is too much.
People creating small scale projects will tend to use a monolith with a local file database, such as SQLite.
Why not have a lightweight database server that can share requests across the network, thus enabling shared state across services.

<br>

### ReadmeGPT :)
## Lightweight NoSQL Database with Advanced Relationships
### Introduction
Welcome to our lightweight NoSQL database with advanced relationship capabilities! 
This database is designed to be a scalable, 
Linux-optimized solution that is easy to use from various client languages such as C#, 
Node.js, Go, and more. With fixed schemas and support for multiple schemas per table, 
our database provides flexibility while maintaining structure.

### Key Features
#### Lightweight and Scalable: 
Our database is designed to be lightweight and efficient, 
allowing it to scale seamlessly to handle growing workloads.

#### Typed Data Exchange (TDX): 
We use the TDX format, a typed data format, 
to store and transmit data efficiently. 
TDX supports various generic data types, including numbers, strings, datetime, and JSON, 
enabling you to store diverse data.

#### Advanced Relationship Modeling: 
Our database supports advanced relationship modeling 
through special entities called "links." These links enable you to establish 
connections between documents (rows) within the same or different tables, 
enabling fast and efficient data traversal.

#### Easy-to-Use Client Interfaces: 
Initially, you can interact with the database using 
code-only interfaces in C# and Node.js. We plan to expand support to other languages 
with the help of the community, ensuring a wide range of client options.

#### Recommended Hardware Configuration: 
For optimal performance, we recommend a system with 
2 cores and an NVMe SSD due to the asynchronous nature of IO operations. 
However, specific performance metrics are still under development.

#### ACID Transactions: 
Our database supports multiple ACID transactions per single connection, 
ensuring data consistency and reliability. Connections also allow for concurrent requests.

#### Written in C++: 
Our database is written in C++ for optimal performance and control over 
system resources.

#### Contribute: 
Join our community to contribute to the project and help expand the support for other client languages.

#### Community and Support
We believe in the power of an active and supportive community. Join our community discord 
to connect with other users, ask questions, share ideas, 
and contribute to the ongoing development of the database.

We're excited to have you onboard and look forward to your valuable feedback 
and contributions!